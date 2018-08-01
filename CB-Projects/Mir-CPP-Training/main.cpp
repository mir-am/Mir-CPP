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


using namespace std;

int main()
{

    //Tuna myDinner;
    //makeFishSwim(myDinner);

    Tuna* pTuna = new Tuna;
    deleteFishMemory(pTuna);

    return 0;
}
