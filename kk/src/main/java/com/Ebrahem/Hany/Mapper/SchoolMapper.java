package com.Ebrahem.Hany.Mapper;

import com.Ebrahem.Hany.Dto.SchoolDto;
import com.Ebrahem.Hany.Entity.School;
import org.springframework.stereotype.Service;

@Service
public class SchoolMapper {
    public School toSchool(SchoolDto school)
    {
        return new School(school.name());
    }
    public SchoolDto toSchoolDto(School school) {
        return new SchoolDto(school.getName());
    }
}
