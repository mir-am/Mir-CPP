#include "car.h"
#include <iostream>


void Motor::switchIgnition()
{
    std::cout << "Ignition On" << std::endl;
}


void Motor::pumpFeul()
{
    std::cout << "Fuel in cylinders" << std::endl;
}


void Motor::fireCylinders()
{
    std::cout << "Vrooom" << std::endl;
}


void Car::moveCar()
{
    switchIgnition();
    pumpFeul();
    fireCylinders();
}
