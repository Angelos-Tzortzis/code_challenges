/*
  2520 is the smallest number that can be divided by each of the numbers
  from 1 to 10 without any remainder. What is the smallest positive
  number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

#define TRUE 1
#define DIV 20

int main()
{
    unsigned int goal, current_number = 20, i, count;

    while (TRUE)
    {
        count = 0;

        for (i = 1; i <= DIV; i++)
        {
            if (current_number % i == 0)
                count++;
        }

        if (count == DIV)
        {
            goal = current_number;
            break;
        }

        current_number += 20;
    }

    printf("goal: %d\n", current_number);

    return 0;
}
