cmake_minimum_required(VERSION 3.16)
project(21)

set(CMAKE_CXX_STANDARD 14)

add_executable(21 main.cpp Person/person.cpp Person/person.h Person/Patient/patient.cpp Person/Patient/patient.h Person/Employee/security.cpp Person/Employee/security.h Clinic/Info/Shedule/schedule.cpp Clinic/Info/Shedule/schedule.h Clinic/clinic.cpp Clinic/clinic.h Clinic/Info/days.cpp Clinic/Info/days.h Person/Employee/doctor.cpp Person/Employee/doctor.h Person/Employee/intern.cpp Person/Employee/intern.h
)