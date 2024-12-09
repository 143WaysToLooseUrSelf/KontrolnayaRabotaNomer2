cmake_minimum_required(VERSION 3.16)
project(21)

set(CMAKE_CXX_STANDARD 14)

add_executable(21 main.cpp Person/person.cpp Person/person.h Person/Patient/patient.cpp Person/Patient/patient.h Person/Employee/security.cpp Person/Employee/security.h Clinic/Information/Shedule/schedule.cpp Clinic/Information/Shedule/schedule.h Clinic/clinic.cpp Clinic/clinic.h Clinic/Information/days.cpp Clinic/Information/days.h Person/Employee/doctor.cpp Person/Employee/doctor.h Person/Employee/director.cpp Person/Employee/director.h
)