/*
Mir's C++ Training Program
Developer: Mir, A.
July 23, 2018

This project is created for educational purpose.
*/

#include <iostream>
#include "libdate.h"

using namespace std;

int main()
{
    Date today(7, 23, 2018);
    today.displayDate();

    ++today; // Mode date ahead by a day
    today.displayDate();

    --today;
    today.displayDate(); // Move date backwards by a day

    return 0;
}
