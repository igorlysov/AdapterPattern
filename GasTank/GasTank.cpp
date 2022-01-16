//
// Created by мвидео on 16.01.2022.
//

#include "GasTank.h"

double GasTank::getPressure(const int& T) {
    return (amountOfMatter() * R * T) / _volume;
}

double GasTank::amountOfMatter() {
    return _molarMass / _mass;
}

std::string GasTank::toString() {
    return "Tank volume: " + std::to_string(_volume) + "; Tank mass: " + std::to_string(_mass) +
            "; Gas molar mass: " + std::to_string(_molarMass);
}
