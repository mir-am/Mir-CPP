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
#include <myvector.h>


using namespace std;

int main()
{

    MyVector<int> vecInt(10);

     // Try to assign a value
    vecInt[3] = 5;
    vecInt[2] = 12;

    MyVector<int> vecIntDef(vecInt);

    MyVector<double> vecDouble(20);



    cout << vecIntDef[3] << " " << vecIntDef[2] << endl;

    cout << vecInt << endl;







    return 0;


}
