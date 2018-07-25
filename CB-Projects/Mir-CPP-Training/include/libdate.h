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
        operator int();



};

#endif // DATE_H
