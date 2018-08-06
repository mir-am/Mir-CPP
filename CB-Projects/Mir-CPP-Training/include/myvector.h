#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <string.h>


template <typename T>
class MyVector
{

    private:

        // A pointer to the elements of Vector on free store.
        T* buffer;

    public:

        // default constructor
        MyVector()
        {
            buffer = NULL;
        }

        MyVector(const unsigned int numElements)
        {
            buffer = new T[numElements];

            // Initiliaze vector with zero
            for(unsigned int i = 0; i < numElements; ++i)
                buffer[i] = 0;
        }


        ~MyVector()
        {
            delete[] buffer;
        }

        // Operator overloading
        T operator [] (unsigned int index) const
        {
            return buffer[index];
        }



//        MyVector(const MyVector& other);
//        MyVector& operator=(const MyVector& other);



};

#endif // MYVECTOR_H
