//
// Created by мвидео on 16.01.2022.
//

#ifndef ADAPTER_GASTANK_H
#define ADAPTER_GASTANK_H

#include <iostream>
#include <string>

class GasTank {
protected:
    double _volume;
    double _mass;
    double _molarMass;
    const double R = 8.31;
public:
    GasTank(double V, double M, double Mu) : _volume(V), _mass(M), _molarMass(Mu) {}
    double getPressure(const int& Temperature);
    double amountOfMatter();
    std::string toString();
};


#endif //ADAPTER_GASTANK_H
