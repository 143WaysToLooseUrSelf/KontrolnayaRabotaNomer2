#include <iostream>
#include "doctor.h"

Doctor::Doctor(std::string name, std::string workTime) : Person(name), _workTime(workTime) {}

void Doctor::displayInfo() { // полиморфифзм (переопределение метода)
    std::cout << "\tСотрудник: " << _name << " || Должность: Врач-офтальмолог" << "\n";
    std::cout << "\tВремя работы: " << _workTime << "\n";
}


std::string Doctor::getWorkTime() {
    return _workTime;
}

void Doctor::setWorkTime(std::string workTime) {
    _workTime = workTime;
}
