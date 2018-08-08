#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <string.h>


// A function pointer
typedef void(*func)(int);


// Copy elements of a vector to another
template <typename T>
void vecCopy(T* sourceBuffer, T* destBuffer, size_t bufferSize)
{
    for(size_t i = 0; i < bufferSize; ++i)
        destBuffer[i] = sourceBuffer[i];

}


template <typename T>
class MyVector
{

    private:

        // A pointer to the elements of Vector on free store.
        T* buffer;
        size_t numVecElements;

    public:

        // default constructor
        MyVector()
        {
            buffer = NULL;
            numVecElements = 0;
        }

        MyVector(const unsigned int numElements)
        {
            buffer = new T[numElements];
            numVecElements = numElements;

            // Initiliaze vector with zero
            for(unsigned int i = 0; i < numElements; ++i)
                buffer[i] = 0;
        }

        // Copy constructor
        MyVector(const MyVector& other)
        {
            buffer = NULL;

            if(other.buffer != NULL)
            {
                buffer = new T[other.getLength()];
                vecCopy(other.buffer, buffer, other.getLength());

                std::cout << "New buffer points to: " << buffer << std::endl;
            }

        }


        ~MyVector()
        {
            delete[] buffer;
        }

        // Get size of Vector
        size_t getLength() const
        {
            return numVecElements;
        }

        // Operator overloading for accessing elements.
        T& operator [] (unsigned int index) const
        {
            return buffer[index];
        }

        // Writing element to buffer
        T& operator [] (unsigned int index)
        {
            return buffer[index];
        }


//        MyVector& operator=(const MyVector& other);



};

// printing elements of an array with cout
template <typename T>
std::ostream& operator << (std::ostream& out, const MyVector<T>& vec)
{
    for(size_t i = 0; i < vec.getLength(); ++i)
    {
        out << vec[i] << " ";
    }

    out << std::endl;

    return out;
}

// Fill array with arbitrary function
template<typename T>
void fillVec(MyVector<T>& vec, func)
{
    for(size_t i = 0; i < vec.getLength(); ++i)
        vec[i] = func(i);
}

#endif // MYVECTOR_H
