package com.Ebrahem.Hany.Repository;

import com.Ebrahem.Hany.Entity.Student;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface StudentRepository extends JpaRepository<Student, Integer> {

    List<Student> findByFirstNameContaining(String name);

}
