//
// Created by мвидео on 16.01.2022.
//

#ifndef ADAPTER_TANKADAPTER_H
#define ADAPTER_TANKADAPTER_H

#include "GasTank.h"
#include "TankAdaptee.h"

class TankAdapter : public GasTank, public TankAdaptee {
public:
    TankAdapter(double V, double M, double Mu) : GasTank(V, M, Mu) {}
    ~TankAdapter() override = default;
    void modifyVolume(const double& dV) override;
    double getDp(const int& T0, const int& T1) override;
    std::string Passport() override;
};


#endif //ADAPTER_TANKADAPTER_H
