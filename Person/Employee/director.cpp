#include "director.h"
#include <iostream>

Director::Director(std::string name, std::string workTime, std::string itemInHand, double timeOfLead)
        : Person(name), Doctor(name, workTime), Security(name, itemInHand), _timeOfLead(timeOfLead) {}

void Director::displayInfo() { // полиморфифзм (переопределение метода)
    std::cout << "\tСотрудник: " << _name << " | Должность: Директор"  << "\n";
    std::cout << "\tВремя работы: " << getWorkTime() << "\n";
    std::cout << "\tВ руках: " << getItemInHand() << "\n";
    std::cout << "\tДата поступления на должность: " << _timeOfLead <<  "\n\n";
}



