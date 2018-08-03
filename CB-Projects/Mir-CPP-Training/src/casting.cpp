#include "casting.h"
#include <iostream>
#include "car.h"


void convertFishToTuna()
{
    Fish myFish(true);
    Tuna myDinner;

    // Not allowed by the compiler. It's a down casting
    //Tuna* newTuna = &myFish;

    // Force the compiler to cast
    Tuna* newTuna = static_cast<Tuna*>(&myFish);

    // Check a method after casting
    newTuna->Swim();
}


void convertTunaToFish()
{
    Tuna myDinner;
    Fish myFish(true);

    // No complains by the compiler! Up casting is fine!
    Fish* newFish = &myDinner; // An implicit cast
    Fish* anotherFish = static_cast<Fish*>(&myDinner);

    newFish->Swim();
}


// A base class pointer Fish* and converting to Tuna or Carp using dynamic cast
void detectFishType(Fish* objFish)
{
    Tuna* objTuna = dynamic_cast<Tuna*>(objFish);

    // If the cast fails, objTuna is null
    if(objTuna)
    {
        std::cout << "Tuna fish detected..." << std::endl;
        objTuna->Swim();
    }

    Carp* objCarp = dynamic_cast<Carp*>(objFish);
    if(objCarp)
    {
        std::cout << "Carp fish detected..." << std::endl;
        objCarp->Swim();
    }

    // Verifying using virtual Fish::swim()
    objFish->Swim();
}


void castNonsense(Fish* objFish)
{
    // This should be avoided!!! it makes absolutely no sense!
    Car* carFish = reinterpret_cast<Car*>(objFish);
}

void constCast(const MyString& objStr)
{

    // Compiler gives an error. You need to use const_cast
    //std::cout << objStr.getString() << std::endl;

    MyString& refStr = const_cast<MyString&>(objStr);
    std::cout << refStr.getString() << std::endl;

}
