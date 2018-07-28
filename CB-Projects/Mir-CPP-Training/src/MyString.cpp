#include "MyString.h"
#include <string.h>
#include <iostream>


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


MyString::~MyString()
{
    std::cout << "Clearing up the string's buffer..." << std::endl;
    delete[] buffer;
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
