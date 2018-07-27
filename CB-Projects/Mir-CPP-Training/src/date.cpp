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


bool Date::operator == (const Date& compareTo)
{
    return ((day == compareTo.day) && (month == compareTo.month)
             && (year == compareTo.year));
}


bool Date::operator != (const Date& compateTo)
{
    return !(this->operator==(compateTo));
}


bool Date::operator < (const Date& compareTo)
{
    if(year < compareTo.year)
        return true;
    else if(month > compareTo.month)
        return true;
    else if (day < compareTo.day)
        return true;
    else
        return false;
}


bool Date::operator > (const Date& compareTo)
{
    return !(this->operator < (compareTo));
}


bool Date::operator <= (const Date& compareTo)
{
    if(this->operator== (compareTo))
        return true;
    else
        return this->operator< (compareTo);
}


bool Date::operator >= (const Date& compareTo)
{
    if(this->operator== (compareTo))
        return true;
    else
        return this->operator> (compareTo);
}
