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
    MyString string1("Python is great.");

    // An example of shallow copy
    useMyString(myStr);

    for(int i = 0; i < myStr.getLength(); ++i)
        cout << myStr[i] << " ";
    cout << endl;



    return 0;
}
