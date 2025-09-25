/*
    A Pythagorean triplet is a set of three natural numbers, a < b < c,
    for which, a^2 + b^2 = c^2
    For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
    There exists exactly one Pythagorean triplet for which a + b + c = 1000
    Find the product abc.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    double c;
    int c_squared;
    unsigned long long int result;

    for (b = 1; b <= 1000; b++)
    {
        for (a = 0; a < b; a++)
        {
            c_squared = a * a + b * b;
            c = sqrt(c_squared);

            if ((a + b + c) == 1000 && (b < c))
            {
                result = a * b * c;
                printf("Result: %llu.\n\n", result);
                break;
            }
        }
    }

    return 0;
}
