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

    const int ARRAY_SIZE = 3;

    Fish* myFishes[ARRAY_SIZE] = {NULL};
    myFishes[0] = new Tuna();
    myFishes[1] = new Carp();
    myFishes[2] = new Carp();

    Fish* myNewFishes[ARRAY_SIZE];
    for(int index = 0; index < ARRAY_SIZE; ++index)
        myNewFishes[index] = myFishes[index]->Clone();

    // Invoke a virtual method to check
    for(int index = 0; index < ARRAY_SIZE; ++index)
        myNewFishes[index]->Swim();

    // Memory cleanup
    for(int index = 0; index < ARRAY_SIZE; ++index)
    {
        delete myFishes[index];
        delete myNewFishes[index];
    }

    return 0;
}
