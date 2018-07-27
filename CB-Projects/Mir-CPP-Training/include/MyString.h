#ifndef MYSTRING_H
#define MYSTRING_H

/*
MyString class is only defined for educational purpose.
Obviously, one uses STL string for real development.
*/

class MyString
{

    private:

        char* buffer;

    public:

        MyString(const char* initString);

        // Copy constructor
        MyString(const MyString& copySource);

        ~MyString();

        int getLength();

        const char* getString();

};

void useMyString(MyString str);

#endif // MYSTRING_H
