#pragma once

#include <vector>
#include <string>
#include "Information/days.h"
#include "../Person/person.h"


class Clinic {
private:
    std::vector<Day*> days;
    std::vector<Person*> employee;

    int daysOfClinic = 0;
public:
    Clinic();
    ~Clinic();

    void addDay(std::string dayName);
    void addScheduleToDay(std::string dayName, Schedule* schedule);
    void displayDays();


    void addPerson(Person* person);
    void displayEmployee();
};
