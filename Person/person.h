#pragma once

#include <string>

class Person { // абстрактный класс
protected:
    std::string _name; // инкапсуляция

public:
    Person(std::string name);
    virtual ~Person() = default; // v фукнция
    virtual void displayInfo() = 0; // чистая v функция
};

