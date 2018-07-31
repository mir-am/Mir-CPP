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

using namespace std;

int main()
{
    Carp myLunch;
    Tuna myDinner;

    myLunch.Swim();
    myDinner.Swim();

    // Invoking overridden methods of a base class
    myDinner.Fish::Swim();

    return 0;
}
