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

        //Private default constructor
        MyString();

    public:

        MyString(const char* initString);

        // Copy constructor
        MyString(const MyString& copySource);

        // Copy assignment operator
        MyString& operator = (const MyString& copySource);

        // Move constructor
        MyString(MyString&& moveSrc);

        // Move assignment operator
        MyString& operator = (MyString&& moveSrc);

        ~MyString();

        operator const char*();

        const char& operator [] (int index) const;

        // Concat strings
        MyString operator + (const MyString& addThis);

        int getLength() const;

        const char* getString();

};

void useMyString(MyString str);

#endif // MYSTRING_H
