#pragma once

#include <string>

class Schedule
 {
private:
    std::string _title;
    std::string _time;

public:
    Schedule(std::string title, std::string time);
    std::string getTitle();
    void displayInfo();
};
