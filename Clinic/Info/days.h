#pragma once
#include <vector>
#include <string>
#include "Shedule/schedule.h"

class Day {
private:
    std::string _name;
    std::vector<Schedule*> schedules;
    std::vector<std::string> bookedAppointments;

public:
    Day(std::string name);
    ~Day();
    std::string getName();
    void addSchedule(Schedule* Schedule);
    void displaySchedules();
    void bookAppointment(std::string patientName);
    void displayAppointments();
};


