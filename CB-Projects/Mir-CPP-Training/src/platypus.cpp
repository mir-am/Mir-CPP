#include "platypus.h"
#include <iostream>


Animal::Animal()
{
    std::cout << "Animal constructor" << std::endl;
}


void Mammal::feedBabyMilk()
{
    std::cout << "Mammal: baby says glug!" << std::endl;
}


void Reptile::splitVenom()
{
    std::cout << "Reptile: Shoo enemy!" << std::endl;
}


void Bird::layEggs()
{
    std::cout << "Bird: Laid my eggs..." << std::endl;
}


Platypus::Platypus()
{
    std::cout << "Platypus constructor..." << std::endl;
}


void Platypus::swim()
{
    std::cout << "Platypus: I can Swim..." << std::endl;
}
