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
#include "platypus.h"
#include "casting.h"


using namespace std;

int main()
{

    Tuna myDinner;
    Carp myLunch;

    detectFishType(&myDinner);
    detectFishType(&myLunch);

}
