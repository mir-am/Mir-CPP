#ifndef DATE_H
#define DATE_H

#include <string>


// A class for handling calendar
class Date
{

    private:

        int day, month, year;
        std::string dateInString;


    public:

        Date(int inMonth, int inDay, int inYear);

        Date& operator ++ (); // prefix increment

        Date& operator -- (); // prefix decrement

        void displayDate();

        // Support for cout
        explicit operator const char*();

        // Integer representation
        explicit operator int();

        Date operator + (int daysToAdd);

        Date operator - (int daysToSub);

        void operator += (int daysToAdd);

        void operator -= (int daysToSub);

        bool operator == (const Date& compareTo);

        bool operator != (const Date& compareTo);

        bool operator < (const Date& compareTo);

        bool operator > (const Date& compareTo);

        bool operator <= (const Date& compareTo);

        bool operator >= (const Date& compareTo);



};

#endif // DATE_H
