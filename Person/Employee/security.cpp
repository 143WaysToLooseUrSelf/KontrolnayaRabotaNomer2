#include <iostream>
#include "security.h"

Security::Security(std::string name, std::string itemInHand) : Person(name), _itemInHand(itemInHand) {}

void Security::displayInfo() { // полиморфифзм (переопределение метода)
    std::cout << "\tСотрудник: " << _name << " || Должность: Охранник"  << "\n";
    std::cout << "\tВ руках: " << _itemInHand << "\n";
    std::cout << "--------------------------------------------------------" << "\n";
}

std::string Security::getItemInHand() {
    return _itemInHand;
}

