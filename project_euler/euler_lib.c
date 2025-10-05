#include "euler_lib.h"
#include <stdbool.h>

int is_prime(int number)
{
    if (number <= 1)
        return false;
    if (number <= 3)
        return true;
    if (number % 2 == 0 || number % 3 == 0)
        return false;

    for (int i = 5; i * i <= number; i += 6)
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
    return true;
}

int reverse_number(int number)
{
    int reverse = 0, remainder;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    return reverse;
}