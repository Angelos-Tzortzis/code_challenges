/*
  The sum of the squares of the first ten natural numbers is, 1^2 + 2^2
  + ... + 10^2 = 385. The square of the sum of the first ten natural
  numbers is, (1 + 2 + ... + 10)^2 = 55^2 = 3025. Hence the difference
  between the sum of the squares of the first ten natural numbers and
  the square of the sum is 3025 - 385 = 2640. Find the difference
  between the sum of the squares of the first one hundred natural
  numbers and the square of the sum.
*/

#include <stdio.h>

#define NUMBER 100

int main()
{
  int i, sum_of_squares = 0, square_of_sum = 0, final_result;

  for (i = 1; i <= NUMBER; i++)
  {
    sum_of_squares += i*i;
    square_of_sum += i;
  }

  square_of_sum *= square_of_sum;

  final_result = square_of_sum-sum_of_squares;

  printf("%d\n", final_result);

  return 0;
}