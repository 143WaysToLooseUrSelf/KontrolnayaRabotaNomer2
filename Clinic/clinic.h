#pragma once
#include <vector>
#include "../Person/person.h"
#include "Info/days.h"

class Clinic {
private:
    std::vector<Day*> days;
    std::vector<Person*> employee;

public:
    Clinic();
    ~Clinic();
    void addDay(std::string dayName);
    void addScheduleToDay(std::string dayName, Schedule* schedule);
    void displayDays();
    void addPerson(Person* person);
    void displayEmployee();
    void bookPatientForDay(std::string patientName, std::string dayName);
    void displayAppointmentsForDay(std::string dayName);
};
