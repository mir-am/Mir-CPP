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

using namespace std;

int main()
{


    MyString myStr("I love C++.");
    MyString string1(" Python is great.");
    MyString string2(" But it's slow!");

    MyString sayHelloAgain("overwrite this");

    sayHelloAgain = myStr + string1 + string2;

    cout << sayHelloAgain << endl;



    return 0;
}
