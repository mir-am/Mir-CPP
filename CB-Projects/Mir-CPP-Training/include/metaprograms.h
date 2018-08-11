#ifndef METAPROGRAMS_H
#define METAPROGRAMS_H

#include <math.h>

// Fibonacci sequence
constexpr long fibonacci(long n)
{
    return n <= 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

// Compute prime numbers
constexpr bool isPrime(int i)
{
    if(i == 1)
        return false;
    if(i % 2 == 0)
        return i == 2;

    // Test the divisibility by odd numbers less then square root of i
    int maxCheck = static_cast<int>(sqrt(i) + 1);

    for (int j = 3; j < maxCheck; j += 2)

        if(i % j == 0)
            return false;

    return true;
}


#endif // METAPROGRAMS_H
