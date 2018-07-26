#include "libdate.h"
#include <iostream>
#include <sstream>


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


// Explicit forces the programmer uses the static_cast<>
Date::operator const char*()
{
    std::ostringstream formattedDate;
    formattedDate << month << " / " << day << " / " << year;

    dateInString = formattedDate.str();
    return dateInString.c_str();

}


Date::operator int()
{
    return day + month + year;
}


Date Date::operator + (int daysToAdd)
{
    Date newDate(month, day + daysToAdd, year);
    return newDate;
}


Date Date::operator - (int daysToSub)
{
    return Date(month, day - daysToSub, year);
}


void Date::operator += (int daysToAdd)
{
    day += daysToAdd;
}


void Date::operator -= (int daysToSub)
{
    day -= daysToSub;
}
