#include <iostream>
#include "intern.h"

Intern::Intern(std::string name, std::string workTime, std::string itemInHand, double internshipStartDate)
        : Person(name), Doctor(name, workTime), Security(name, itemInHand), _internshipStartDate(internshipStartDate) {}

void Intern::displayInfo() { // Переопределение метода
    std::cout << "\tСотрудник: " << _name << " || Должность: Стажер"  << "\n";
    std::cout << "\tВ руках: " << getItemInHand() << "\n";
    std::cout << "\tВремя работы: " << getWorkTime() << "\n";
    std::cout << "\tДата начала стажировки: " << _internshipStartDate << "\n";
}
