#include <stdio.h>

#define LIMIT 4000000

int main()
{
  int fib, fib1, fib2, fib_sum;

  fib1 = 0;
  fib2 = 1;
  fib_sum = 0;

  fib = fib1 + fib2;
  while (fib <= LIMIT)
  {
    if (((fib % 2) == 0))
      fib_sum += fib;

    fib1 = fib2;
    fib2 = fib;
    fib = fib1 + fib2;
  }

  printf("sum: %d\n", fib_sum);

  return 0;
}
