package com.Ebrahem.Hany.Contoller;

import com.Ebrahem.Hany.Entity.Student;
import com.Ebrahem.Hany.Dto.StudentDto;
import com.Ebrahem.Hany.Service.StudentService;
import jakarta.validation.Valid;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.validation.FieldError;
import org.springframework.web.bind.MethodArgumentNotValidException;
import org.springframework.web.bind.annotation.*;

import java.util.HashMap;
import java.util.List;

@RestController

public class StudentController {

    private StudentService studentService;


    @PostMapping("/save")
    public Student Save(
            @RequestBody Student student
    ) {
       return studentService.Save(student);
    }
    @GetMapping("/Students")
    public List<Student> allStudents() {
        return studentService.allStudents();
    }
    @GetMapping("{id}")
    public Student getStudent(@PathVariable Integer id)
    {
        return studentService.getStudent(id);
    }
    @DeleteMapping("{id}")
    public void deleteStudent(@PathVariable Integer id)
    {
       studentService.deleteStudent(id);
    }
        @GetMapping("/search/{name}")
    public List<Student> getStudentByName(@PathVariable String name){
          return studentService.getStudentByName(name);
    }

    @PostMapping("/savedto")
    public StudentDto StudentToStudentDto(@Valid @RequestBody StudentDto studentDto) {
        return studentService.StudentToStudentDto(studentDto);
    }

    @ExceptionHandler(MethodArgumentNotValidException.class)
    public ResponseEntity<?> handleMethodArgumentNotValidException(MethodArgumentNotValidException ex) {

        var errors=new HashMap<String,String>();
        ex.getBindingResult().getAllErrors().forEach(error->{
            var fieldName=((FieldError)error).getField();
            var errorMessage=error.getDefaultMessage();
            errors.put(fieldName,errorMessage);
        });
        return new ResponseEntity<>(errors,HttpStatus.BAD_REQUEST);
    }
    



}
