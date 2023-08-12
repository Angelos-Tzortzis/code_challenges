/*
  The prime factors of 13195 are 5, 7, 13 and 29. What is the largest
  prime factor of the number 600851475143?
*/

// Code doesn't run correctly but we can find the result.

#include <stdio.h>

#define NUMBER 600851475143
#define FALSE 0
#define TRUE 1

int is_prime(int);

int main()
{
  int i, max_factor;

  max_factor = 2;
  for (i = 3; i < NUMBER; i++)
  {
    if (is_prime(i) && ((NUMBER % i) == 0))
    {
      printf("%d\n", i);
      if (i > max_factor)
        max_factor = i;
    }
  }

  printf("\nmax: %d\n", max_factor);

  return 0;
}

int is_prime(int number)
{
  int i;

  for (i = 2; i < number; i++)
  {
    if ((number % i) == 0)
      return FALSE;
  }
  return TRUE;
}
