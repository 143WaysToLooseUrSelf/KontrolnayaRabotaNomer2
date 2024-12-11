#include "days.h"
#include <iostream>

Day::Day(std::string name) : _name(name) {}

Day::~Day() {}

std::string Day::getName() {
    return _name;
}

void Day::addSchedule(Schedule* schedule) {
    schedules.push_back(schedule);
}

void Day::displaySchedules() {
    std::cout << "\tДень недели: " << _name << "\n";
    for (Schedule* schedule : schedules) schedule->displayInfo();
}

void Day::bookAppointment(std::string patientName) {
    bookedAppointments.push_back(patientName);
    std::cout << "--------------------------------------------------------\n";
    std::cout << "Пациент " << patientName << " записан на прием в " << _name << "\n";
}

void Day::displayAppointments() {
    if (bookedAppointments.empty()) {
        std::cout << "Нет записей на прием в этот день.\n";
        return;
    }
    std::cout << "\tЗаписи на прием в " << _name << ":\n";
    for (std::string patientName : bookedAppointments) {
        std::cout << "\tПациент: " << patientName << "\n";
    }
}