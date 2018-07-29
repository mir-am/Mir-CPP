#include "MyString.h"
#include <string.h>
#include <iostream>


MyString::MyString(): buffer(NULL)
{
    std::cout << "Default constructor called..." << std::endl;
}



MyString::MyString(const char* initString)
{
    buffer = NULL;

    if(initString != NULL)
    {
        buffer = new char[strlen(initString) + 1];
        strcpy(buffer, initString);

        std::cout << "Buffer points to 0x";
        std::cout << (unsigned int*) buffer << std::endl;
    }
}


MyString::MyString(const MyString& copySource)
{

    std::cout << "Copy constructor copies: " << copySource.buffer << std::endl;

    buffer = NULL;

    if(copySource.buffer != NULL)
    {
        // Allocate own buffer
        buffer = new char[strlen(copySource.buffer) + 1];

        // Deep copy from source into local buffer
        strcpy(buffer, copySource.buffer);

        std::cout << "Buffer points to 0x";
        std::cout << (unsigned int*) buffer << std::endl;
    }
}


MyString& MyString::operator = (const MyString& copySource)
{

    std::cout << "Copy assignment op. copies: " << copySource.buffer << std::endl;

    if((this != &copySource) && (copySource.buffer != NULL))
    {
        if(buffer != NULL)
            delete[] buffer;

        // Deep copy
        buffer = new char[strlen(copySource.buffer) + 1];

        // Copy from the source into local buffer
        strcpy(buffer, copySource.buffer);
    }

    return *this;
}


MyString::MyString(MyString&& moveSrc)
{
    std::cout << "Move constructor moves: " << moveSrc.buffer << std::endl;

    if(moveSrc.buffer != NULL)
    {
        buffer = moveSrc.buffer; // take ownership
        moveSrc.buffer = NULL; // free move source
    }
}


MyString& MyString::operator = (MyString&& moveSrc)
{
    std::cout << "Move assignment op. moves: " << moveSrc.buffer << std::endl;

    if((moveSrc != NULL) && (this != &moveSrc))
    {
        delete[] buffer; // release own buffer

        buffer = moveSrc.buffer;
        moveSrc.buffer = NULL;
    }
}


MyString::~MyString()
{
    if(buffer != NULL)
    {
        std::cout << "Clearing up the string's buffer..." << std::endl;
        delete[] buffer;
    }
}


MyString::operator const char*()
{
    return buffer;
}


const char& MyString::operator [] (int index) const
{
    if(index < getLength())
        return buffer[index];
}


MyString MyString::operator + (const MyString& addThis)
{
    MyString newStr;

    if(addThis.buffer != NULL)
    {
        newStr.buffer = new char[this->getLength() + strlen(addThis.buffer) + 1];
        strcpy(newStr.buffer, buffer);
        strcat(newStr.buffer, addThis.buffer);
    }

    return newStr;
}


int MyString::getLength() const
{
    return strlen(buffer);
}


const char* MyString::getString()
{
    return buffer;
}


void useMyString(MyString str)
{
    std::cout << "String buffer is: " << str.getLength();
    std::cout << " characters long." << std::endl;

    std::cout << "Buffer contains: " << str.getString() << std::endl;

    return;
}
