#include <stdio.h>

#define RANGE 1000

int main()
{
  int i, sum = 0;

  for (i = 0; i < RANGE; i++)
  {
    if (((i % 3) == 0) || ((i % 5) == 0))
      sum += i;
  }

  printf("sum: %d\n", sum);

  return 0;
}
