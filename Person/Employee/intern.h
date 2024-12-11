#pragma once
#include "doctor.h"
#include "security.h"

class Intern : public Doctor, public Security { // Множественное наследование
private:
    double _internshipStartDate;  // дата начала стажировки

public:
    Intern(std::string name, std::string workTime, std::string itemInHand, double internshipStartDate);
    void displayInfo();
};
