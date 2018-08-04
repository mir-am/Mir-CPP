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


using namespace std;

int main()
{

    int num = 1;
    int num1;

    cout << "Enter a number" << endl;
    cin >> num1;


    cout <<"2 ^ 2: " << SQUARE(2) << endl;
    cout << "Min(" << num << "," << num1 << "): " << MIN(num, num1) << endl;
    cout << "Max(" << num << "," << num1 << "): " << MAX(3, 5.5) << endl;

}
