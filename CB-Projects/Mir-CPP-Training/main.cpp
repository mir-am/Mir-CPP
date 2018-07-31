/*
Mir's C++ Training Program
Developer: Mir, A.
July 23, 2018

This project is created for educational purpose.
*/

#include <iostream>
#include <memory>
#include "libdate.h"
#include "MyString.h"
#include "fish.h"
#include "car.h"


using namespace std;

int main()
{
    Car myDreamCar;
    myDreamCar.moveCar();

    RaceCar myRaceCar;
    myRaceCar.moveCar();

    return 0;
}
