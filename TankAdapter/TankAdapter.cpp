//
// Created by мвидео on 16.01.2022.
//

#include "TankAdapter.h"

void TankAdapter::modifyVolume(const double& dV) {
    this->_volume += dV;
}

double TankAdapter::getDp(const int& T0, const int& T1) {
    return this->getPressure(T1) - this->getPressure(T0);
}

std::string TankAdapter::Passport() {
    return this->toString();
}
