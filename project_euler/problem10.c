/*
    The sum of the primes below 10 is
    2 + 3 + 5 + 7 = 17.
    Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include "euler_lib.h"

#define RANGE 2000000

int main()
{
    unsigned long long int sum = 0;

    for (int i = 2; i < RANGE; i++)
    {
        if (is_prime(i))
            sum += i;
    }

    printf("Result: %llu\n", sum);

    return 0;
}
