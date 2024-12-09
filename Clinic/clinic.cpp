#include "clinic.h"
#include "../Person/Patient/patient.h"
#include <iostream>

Clinic::Clinic()  {}

Clinic::~Clinic() {
}

void Clinic::addDay(std::string dayName) { // логика клиники добавляет дни, расписания и сотрудников
    days.push_back(new Day(dayName));
}

void Clinic::addScheduleToDay(std::string dayName, Schedule* schedule) {
    for (Day* day : days) {
        if (day->getName() == dayName) {
            day->addSchedule(schedule);
            return;
        }
    }
    std::cout << "День " << dayName << " не найден.\n";
}

void Clinic::displayDays() {
    std::cout << "--------------------------------------------------------" << "\n";
    std::cout << "Расписание работы врачей:\n";
    for (Day *day : days) {
        day->displaySchedules();
    }
}

void Clinic::addPerson(Person* person) {
    employee.push_back(person);
}

void Clinic::displayEmployee() {
    std::cout << "--------------------------------------------------------" << "\n";
    std::cout << "Сотрудники больницы:\n";
    for (Person* person : employee) {
        person->displayInfo();
    }
}




