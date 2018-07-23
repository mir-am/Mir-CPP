#ifndef DATE_H
#define DATE_H


// A class for handling calendar
class Date
{

    private:

        int day, month, year;

    public:

        Date(int inMonth, int inDay, int inYear);

        Date& operator ++ (); // prefix increment

        Date& operator -- (); // prefix decrement

        void displayDate();



};

#endif // DATE_H
