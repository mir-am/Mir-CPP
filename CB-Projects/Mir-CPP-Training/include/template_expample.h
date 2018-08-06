#ifndef TEMPLATE_EXPAMPLE_H
#define TEMPLATE_EXPAMPLE_H

#include <iostream>
#include <string>

/*
In this file, several template functions and classes are defined for
educational purposes.

Note: Templates are type-safe.

*/


template <typename Type>
const Type getMax(const Type value1, const Type value2)
{
    if(value1 > value2)

        return value1;

    else

        return value2;

}

// A template example with default values

template <typename T1=int, typename T2=double>
class HoldsPair
{
    private:

        T1 value1;
        T2 value2;

    public:

        HoldsPair(const T1 val1, const T2 val2)
        {
            value1 = val1;
            value2 = val2;

        }

        // Acessor functions
        const T1& getFirstValue() const
        {
            return value1;
        }

        const T2& getSecondValue() const
        {
            return value2;
        }

};


// An example of template specialization
template<>
class HoldsPair<int, int>
{
    private:

        int value1;
        int value2;
        std::string strFun;

    public:

        HoldsPair(const int& val1, const int& val2)
            :value1(val1), value2(val2)
        {
            std::cout << "Constructed specializaion of <int, int> ..." << std::endl;
        }

        const int& getFirstValue() const
        {
            return value1;
        }


};


// Static members for template
template <typename T>
class StaticTest
{
    public:

        static int staticVal;
};

// Static member intilzation
template <typename T> int StaticTest<T>::staticVal;


#endif // TEMPLATE_EXPAMPLE_H
