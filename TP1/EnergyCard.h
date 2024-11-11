#ifndef ENERGYCARD_H
#define ENERGYCARD_H
#include "Card.h"
#include <string>

class EnergyCard : public Card { 
public:
    EnergyCard(const std::string& type);
    void displayEnergyCard() const;
private:
    std::string energyType;
};

#endif 
