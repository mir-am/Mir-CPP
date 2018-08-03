#ifndef CASTING_H
#define CASTING_H

#include "fish.h"
#include "MyString.h"

/*
In this file, different types of casting will be explained.
1- Static cast
2- Dynamic cast
3- reinterpret cast
4- Const cast
5- C-style cast
*/


// An example C-style cast
// suppose you want to convert Type A to Type B
template<typename A, typename B>
B convert_C_style(A& var)
{
    return (B) var;
}

// Example of converting Fish (Base) to Tuna (Derived) - Down casting
void convertFishToTuna();

// Example of converting Tuna (Derived) to Fish(Base) - Up casting
void convertTunaToFish();

// An example of dynamic cast to tell whether a fish is tuna or carp
void detectFishType(Fish* objFish);

// An example of using reinterpret cast which makes no sense!!
// For example converting Fish to an unrelated type like Car!!
void castNonsense(Fish* objFish);

// An example of const_cast to turn off const access modifier for an object
void constCast(const MyString& objStr);


#endif // CASTING_H
