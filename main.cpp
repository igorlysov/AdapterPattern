#include "TankAdapter.h"

int main() {
    /// ИНИЦИАЛИЗАЦИЯ НЕАДАПТИРОВАННОГО И АДАПТИРОВАННОГО БАЛЛОНА С ГАЗОМ ///
    GasTank* simpleTank = new GasTank(2.75, 5.2, 4.01);
    TankAdapter* adapterTank = new TankAdapter(5.5, 12.25, 4.01);
    /// ПРОВЕРКА РАБОТОСПОСОЬНОСТИ ///
    std::cout << "Passport of tank without adapter: " <<  simpleTank->toString() << std::endl;
    std::cout << "Passport of tank with adapter: " <<  adapterTank->Passport() << std::endl << std::endl;

    std::cout << "Pressure of tank without adapter: " <<  simpleTank->getPressure(273) << std::endl;
    adapterTank->modifyVolume(1.3);
    std::cout << "Volume modification of tank with adapter by dV = 1.3: " << adapterTank->Passport() << std::endl;
    std::cout << "Pressure difference between 273 and 293 degrees in tank with adapter: " <<
                adapterTank->getDp(273, 293) << std::endl;
    delete simpleTank; delete adapterTank;
    return 0;
}
