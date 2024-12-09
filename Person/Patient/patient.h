#pragma once

#include "../person.h"
#include <vector>
#include <string>

class Patient : virtual public Person {
private:
    double _clinicDate;

public:
    Patient(std::string name, double clinicDate);
    void displayInfo();
};
