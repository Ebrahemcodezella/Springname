package com.Ebrahem.Hany.Dto;

import jakarta.validation.constraints.NotEmpty;

public record StudentDto(
        @NotEmpty(message = "First name can not be empty")
        String firstName,
        @NotEmpty(message = "Last name can not be empty")
        String lastName,
        String email,
        Integer schoolId
) {

}
