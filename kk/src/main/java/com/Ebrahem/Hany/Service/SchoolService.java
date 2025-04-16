package com.Ebrahem.Hany.Service;

import com.Ebrahem.Hany.Dto.SchoolDto;
import com.Ebrahem.Hany.Entity.School;
import com.Ebrahem.Hany.Mapper.SchoolMapper;
import com.Ebrahem.Hany.Repository.SchoolRepository;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.stream.Collectors;

@Service
public class SchoolService {

    private final SchoolRepository schoolRepository;
    private final SchoolMapper schoolMapper;

    public SchoolService(SchoolRepository schoolRepository, SchoolMapper schoolMapper) {
        this.schoolRepository = schoolRepository;
        this.schoolMapper = schoolMapper;
    }
    public School addSchool(School school) {
        return schoolRepository.save(school);
    }
    public School getSchool(Integer id) {

        return schoolRepository.findById(id).
                orElse(new School());
    }
    public List<School> getAllSchools()
    {
        return schoolRepository.findAll();
    }
    public void deleteSchool(Integer id) {
        schoolRepository.deleteById(id);
    }
    public SchoolDto saveSchool(SchoolDto schoolDto) {
        var school = schoolMapper.toSchool(schoolDto);
        schoolRepository.save(school);
        return schoolDto;
    }
    public List<SchoolDto> getAllSchoolsDto(){
        return schoolRepository.findAll().
                stream()
                .map(schoolMapper::toSchoolDto)
                .collect(Collectors.toList());
    }
}
