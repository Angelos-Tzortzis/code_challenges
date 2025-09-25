/*
  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can
  see that the 6th prime is 13. What is the 10001st prime number?
*/

#include <stdio.h>

#define NUM 10001
#define TRUE 1
#define FALSE 0

int is_prime(int);

int main()
{
    int i, j, current, found, count = 0;

    current = 0;
    while (TRUE)
    {
        if (is_prime(current))
        {
            found = current;
            count++;
        }

        if (count == NUM)
            break;

        current++;
    }

    printf("Prime number %d: %d\n", count, found);

    return 0;
}

int is_prime(int number)
{
    int i;

    if (number == 0 || number == 1)
        return FALSE;

    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return FALSE;
            break;
        }
    }

    return TRUE;
}
