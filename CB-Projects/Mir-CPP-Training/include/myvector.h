#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <string.h>
#include <functional>

/**

@file myvector.h

@author A. Mir
@date Aug 12, 2018
*/

// A function pointer
//typedef void(*func)(int);


/**
    Copy elements of a vector from source to destination

    @param sourceBuffer Source vector to copy elements from
    @param destBuffer Destination vector to copy elements to
    @param bufferSize Numbers of elements in source and destination vector. Note that size of source and destination vector must be same.
*/
template <typename T>
void vecCopy(T* sourceBuffer, T* destBuffer, size_t bufferSize)
{
    for(size_t i = 0; i < bufferSize; ++i)
        destBuffer[i] = sourceBuffer[i];

}


/**
@brief A Vector class for educational purposes.

Obviously, one uses STL vector for production code.
This vector implementation has the following characteristics:
- Heap-allocated
- It has Copy costructor and assigment

*/

template <typename T>
class MyVector
{

    private:

        /** A heap-allocated buffer for storing vector elements. */
        T* buffer;
        /** Stores number of elements in vector. */
        size_t numVecElements;

    public:

        /** Default constructor. It creates an empty vector (zero elements).
          */
        MyVector()
        {
            buffer = NULL;
            numVecElements = 0;
        }

        /**
            Initiliazes a vector with number of elements spicified.
            @param numElements Size of vector after initialization.
        */
        MyVector(const unsigned int numElements)
        {
            buffer = new T[numElements];
            numVecElements = numElements;

            // Initiliaze vector with zero
            for(unsigned int i = 0; i < numElements; ++i)
                buffer[i] = 0;
        }

        /**
            Elements of vector are stored on the heap. Therfore, A copy constructor is needed.
            @param MyVector another object of MyVector
        */
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

        /**
            A destructor is absolutely needed to free memeory and avoid memory leak.
        */
        ~MyVector()
        {
            delete[] buffer;
        }

        /**
            Returns number of elements in vector.
            @return size of vector
        */
        size_t getLength() const
        {
            return numVecElements;
        }

        /**
            Overloading [] to access an elemenet of a vector with index
            @param index Access an element.

            For example:
            @code
            // A vector with 10 elements
            MyVector<int> vecInt(10);
            // Get value of element at index 2
            int numInt = vecInt[2];
            @endcode
        */
        T& operator [] (unsigned int index) const
        {
            return buffer[index];
        }

        /**
            Allows to assign an emlement to vector with index
        */
        T& operator [] (unsigned int index)
        {
            return buffer[index];
        }


//        MyVector& operator=(const MyVector& other);



};

/**
    Prints elements of a vector using cout operator.
    Example:

    @code
    MyVector<int> vecInt(5);
    std::cout << vecInt << std::endl;
    @endcode

*/
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
void fillVec(MyVector<T>& vec, std::function<float(int)>func )
{
    for(size_t i = 0; i < vec.getLength(); ++i)
        vec[i] = func(i);
}

#endif // MYVECTOR_H
