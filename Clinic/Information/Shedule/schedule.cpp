#include "schedule.h"
#include <iostream>

Schedule::Schedule(std::string title, std::string time)
        : _title(title), _time(time){}

std::string Schedule::getTitle() {
    return _title;
}

void Schedule::displayInfo() {
    std::cout << "\tВрач: " << _title << " | Время: " << _time <<  "\n";
}
