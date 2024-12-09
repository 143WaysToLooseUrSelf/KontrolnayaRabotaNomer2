#pragma once

#include <string>
#include <vector>
#include "Shedule/schedule.h"

class Day {
private:
    std::string _name;
    std::vector<Schedule*> schedules;

public:
    Day(std::string name);
    ~Day();

    std::string getName();
    void addSchedule(Schedule* Schedule);
    void displaySchedules();
};


