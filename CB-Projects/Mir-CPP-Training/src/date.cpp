#include "libdate.h"
#include <iostream>


Date::Date(int inMonth, int inDay, int inYear)
           : day(inDay), month(inMonth), year(inYear)
{

}


Date& Date::operator++()
{
    ++day;
    return *this;
}


Date& Date::operator--()
{
    --day;
    return *this;
}


void Date::displayDate()
{
    std::cout << month << " / " << day << " / " <<
    year << std::endl;
}
