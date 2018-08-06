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
#include "macro_func.h"
#include "template_expample.h"


using namespace std;

int main()
{


    StaticTest<int> staticObj1;
    StaticTest<int> staticObj2;

    staticObj1.staticVal = 2011;

    cout << staticObj1.staticVal << endl;
    cout << staticObj2.staticVal << endl;






    return 0;


}
