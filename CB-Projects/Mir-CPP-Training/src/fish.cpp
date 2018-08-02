#include "fish.h"
#include <iostream>


Fish::Fish(bool isFreshWater)
    :isFreshWaterFish(isFreshWater)
{
    std::cout << "Fish constructor" << std::endl;
}


Fish* Fish::Clone()
{
    return new Fish (*this);
}

void Fish::Swim()
{

    if(isFreshWaterFish)
        std::cout << "Swims in the lake" << std::endl;
    else
        std::cout << "Swims in sea" << std::endl;
}


Fish::~Fish()
{
        std::cout << "Fish destructor..." << std::endl;
}


Tuna::Tuna()
    :Fish(false)
{
    std::cout << "Tuna constructor" << std::endl;
}


Tuna::~Tuna()
{
    std::cout << "Tuna destructor..." << std::endl;
}

Fish* Tuna::Clone()
{
    return new Tuna(*this);
}


void Tuna::Swim()
{
    std::cout << "Tuna swims really fast" << std::endl;
}


Carp::Carp()
    :Fish(true)
{
    std::cout << "Carp constructor..." << std::endl;
}


Carp::~Carp()
{
    std::cout << "Carp destructor..." << std::endl;
}


Fish* Carp::Clone()
{
    return new Carp(*this);
}


void Carp::Swim()
{
    std::cout << "Carp swims real slow." << std::endl;

    // Invoking methods of a base class in a derived class
    //Fish::Swim();
}


void makeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}


void deleteFishMemory(Fish* pFish)
{
    delete pFish;
}
