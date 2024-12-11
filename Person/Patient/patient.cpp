#include <iostream>
#include "patient.h"

Patient::Patient(std::string name, double clinicDate) : Person(name), _clinicDate(clinicDate) {}


void Patient::displayInfo() {
    std::cout << "\tПациент: " << _name << " (Дата зачисления: " << _clinicDate << ")\n";

}
