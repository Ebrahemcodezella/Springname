package com.Ebrahem.Hany.Service;

import com.Ebrahem.Hany.Dto.StudentDto;
import com.Ebrahem.Hany.Entity.Student;
import com.Ebrahem.Hany.Mapper.StudentMapper;
import com.Ebrahem.Hany.Repository.StudentRepository;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class StudentService {

    private final StudentRepository studentRepository;
    private final StudentMapper studentMapper;
    public StudentService(StudentRepository studentRepository, StudentMapper studentMapper) {
        this.studentRepository = studentRepository;
        this.studentMapper = studentMapper;
    }
    public Student Save(Student student){
        return  studentRepository.save(student);
    }
    public List<Student> allStudents()
    {
        return studentRepository.findAll();
    }
    public Student getStudent(Integer id){
        return studentRepository.findById(id).
                orElse(null);
    }
    public void deleteStudent(Integer id){
        studentRepository.deleteById(id);
    }
    public List<Student> getStudentByName(String name)
    {
        return studentRepository.findByFirstNameContaining(name);
    }
    public StudentDto StudentToStudentDto(StudentDto studentDto){
        var dto = studentMapper.toStudent(studentDto);
        studentRepository.save(dto);
        return studentDto;
    }
}
