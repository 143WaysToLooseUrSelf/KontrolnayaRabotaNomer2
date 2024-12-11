#pragma once
#include "../person.h"

class Security : virtual public Person {
private:
    std::string _itemInHand;

public:
    Security(std::string name, std::string itemInHand);
    void displayInfo();


    std::string getItemInHand();
};

