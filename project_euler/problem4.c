/*
    A palindromic number reads the same both ways. The largest palindrome
    made from the product of two 2-digit numbers is 9009 = 91 x 99. Find
    the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include "euler_lib.h"

#define LARGEST_NUMBER 999

int main()
{
    int i, j, number, max_number = 0;

    for (i = 100; i <= LARGEST_NUMBER; i++)
    {
        for (j = 100; j <= LARGEST_NUMBER; j++)
        {
            number = i * j;

            if ((number == reverse_number(number)) && (number > max_number))
                max_number = number;
        }
    }

    printf("max: %d\n", max_number);

    return 0;
}
