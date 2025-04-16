package com.Ebrahem.Hany.Contoller;

import com.Ebrahem.Hany.Entity.School;
import com.Ebrahem.Hany.Dto.SchoolDto;
import com.Ebrahem.Hany.Repository.SchoolRepository;
import com.Ebrahem.Hany.Service.SchoolService;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.stream.Collectors;

@RestController
@RequestMapping("/api/school")
public class SchoolController {


    private final SchoolService schoolService;
    public SchoolController(SchoolService schoolService) {
        this.schoolService = schoolService;
    }

    @PostMapping("/add")
    public School addSchool(@RequestBody School school) {
        return schoolService.addSchool(school);
    }
    @GetMapping("/{Schoolid}")
    public School getSchool(
            @PathVariable Integer Schoolid
    ) {

        return schoolService.getSchool(Schoolid);
    }

    @GetMapping("/all")
    public List<School> getAllSchools() {
        return schoolService.getAllSchools();
    }
    @DeleteMapping("{id}")
    public void deleteSchool(@PathVariable Integer id) {

        schoolService.deleteSchool(id);
    }

    @PostMapping("/dto")
    public SchoolDto saveSchool(@RequestBody SchoolDto schoolDto) {
        return schoolService.saveSchool(schoolDto);

    }
    @GetMapping("/alldto")
    public List<SchoolDto> getAllSchoolsDto() {
       return schoolService.getAllSchoolsDto();

    }

}
