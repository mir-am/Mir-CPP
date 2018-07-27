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

    Date holiday1(12, 25, 2016);
    Date holiday2(12, 31, 2016);

    cout << "Holiday1 is: " << static_cast<const char*>(holiday1) << endl;
    cout << "Holiday 2 is: ";
    holiday2.displayDate();

    if(holiday1 < holiday2)
        cout << "Holiday 1 happens first." << endl;

    MyString myStr("I love C++.");

    // An example of shallow copy
    useMyString(myStr);


    return 0;
}
