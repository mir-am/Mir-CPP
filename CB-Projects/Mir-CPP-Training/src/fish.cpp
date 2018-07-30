#include "fish.h"
#include <iostream>


Fish::Fish(bool isFreshWater)
    :isFreshWaterFish(isFreshWater)
{

}

void Fish::Swim()
{
    if(isFreshWaterFish)
        std::cout << "Swims in the lake" << std::endl;
    else
        std::cout << "Swims in sea" << std::endl;
}


Tuna::Tuna()
    :Fish(false)
{

}


Carp::Carp()
    :Fish(true)
{

}
