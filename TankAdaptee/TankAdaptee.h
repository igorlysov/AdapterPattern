//
// Created by мвидео on 16.01.2022.
//

#ifndef ADAPTER_TANKADAPTEE_H
#define ADAPTER_TANKADAPTEE_H

#include <string>

class TankAdaptee {
public:
    virtual ~TankAdaptee() = default;
    virtual void modifyVolume(const double& dV) = 0;
    virtual double getDp(const int& T0, const int& T1) = 0;
    virtual std::string Passport() = 0;
};


#endif //ADAPTER_TANKADAPTEE_H
