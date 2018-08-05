#ifndef TEMPLATE_EXPAMPLE_H
#define TEMPLATE_EXPAMPLE_H


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


template <typename T1, typename T2>
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

};


#endif // TEMPLATE_EXPAMPLE_H
