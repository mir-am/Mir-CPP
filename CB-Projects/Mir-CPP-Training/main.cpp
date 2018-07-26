/*
Mir's C++ Training Program
Developer: Mir, A.
July 23, 2018

This project is created for educational purpose.
*/

#include <iostream>
#include <memory>
#include "libdate.h"

using namespace std;

int main()
{
    Date today(7, 23, 2018);

    // Smart pointers
    unique_ptr<Date> smartDate(new Date(7, 26, 2018));

    string strDate(static_cast<const char*>(today));
    int intDate = static_cast<int>(today);

    cout << strDate << endl;
    cout << intDate << endl;

    smartDate->displayDate();

    Date Holiday(12, 25, 2016);
    Holiday.displayDate();

    // Add five days
    Date nextHoliday(Holiday + 6);
    nextHoliday.displayDate();

    Date perviousDate(today - 10);
    perviousDate.displayDate();

    (*smartDate) += 2;
    smartDate->displayDate();

    (*smartDate) -= 20;
    smartDate->displayDate();



    return 0;
}
