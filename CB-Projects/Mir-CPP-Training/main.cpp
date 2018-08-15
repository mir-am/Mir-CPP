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
#include <math.h>
#include <metaprograms.h>
#include <timer.h>

#define PI 3.14159265

using namespace std;

template <typename T>
void useMyVector(MyVector<T> vec)
{
    cout << vec.getLength() << endl;
}


int main()
{

    const size_t DIM = 100000;

    Timer wall_clock;
    wall_clock.start();

    MyVector<int> A(DIM, RAND);
    MyVector<int> B(DIM, RAND);

    //MyVector<int> vecInt2(50);

    //cout << fixed << A << endl;
    //cout << fixed << B << endl;

    MyVector<int> C = A + B;

    wall_clock.stop();

    cout << wall_clock.getTimeElapsed() * 1000 << " ms" << endl;

    //fillVec(vecInt, [](int i){return i + 2;});

    //vecInt2 = vecInt;

    //useMyVector(vecInt);




    //fillVec(vecInt, [](int i){return sin(i * PI / 180);})

    return 0;


}
