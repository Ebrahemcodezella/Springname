package com.Ebrahem.Hany.Mapper;

import com.Ebrahem.Hany.Dto.StudentDto;
import com.Ebrahem.Hany.Entity.School;
import com.Ebrahem.Hany.Entity.Student;
import org.springframework.stereotype.Service;

@Service
public class StudentMapper {

    public  Student toStudent(StudentDto studentDto)
    {
        var student = new Student();
        student.setFirstName(studentDto.firstName());
        student.setLastName(studentDto.lastName());
        student.setEmail(studentDto.email());
        var school = new School();
        school.setId(studentDto.schoolId());
        student.setSchool(school);
        return student;
    }
}
