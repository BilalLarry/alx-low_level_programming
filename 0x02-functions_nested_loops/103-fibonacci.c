#include <stdio.h>
/**
 * fibonacci_sum_even - Calculates the sum of even-valued Fibonacci
 * @limit: The maximum value for Fibonacci terms.
 *
 * Return: The sum of even-valued Fibonacci terms.
 */
int fibonacci_sum_even(int limit)
{
int a = 1, b = 2, temp, sum_even = 0;
while (a <= limit)
{
if (a % 2 == 0)
{
sum_even += a;
}
temp = a;
a = b;
b += temp;
}
return (sum_even);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int limit = 4000000;
int result = fibonacci_sum_even(limit);
printf("%d\n", result);
return (0);
}

