#pragma once
#include "../person.h"

class Patient : public Person {
private:
    double _clinicDate;

public:
    Patient(std::string name, double clinicDate);
    void displayInfo();
};
