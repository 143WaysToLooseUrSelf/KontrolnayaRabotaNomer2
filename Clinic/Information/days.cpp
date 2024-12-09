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
