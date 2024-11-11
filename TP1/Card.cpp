#include "Card.h"
#include <iostream>

Card::Card(const std::string& name) : cardName(name){}

void Card::displayInfo() const{
    std::cout << "Card Name: " << cardName << std::endl;
}
Card::~Card() = default;