#pragma once
#include "../person.h"

class Doctor : virtual public Person {
private:
    std::string _workTime;

public:
    Doctor(std::string name, std::string workTime);
    void displayInfo();
    std::string getWorkTime();
    void setWorkTime(std::string workTime);
};

