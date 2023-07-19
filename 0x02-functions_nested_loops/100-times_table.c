#include <stdio.h>

/**
 * fibonacci_sum_even - Calculates the sum of even-valued Fibonacci terms not exceeding the given limit.
 * @limit: The maximum value for Fibonacci terms.
 *
 * Return: The sum of even-valued Fibonacci terms.
 */
int fibonacci_sum_even(int limit)
{
	int a = 1, b = 2, temp, sum_even = 0;

	while (a <= limit)
	{
		/* Check if the current Fibonacci term 'a' is even */
		if (a % 2 == 0)
		{
			/* If 'a' is even, add it to the sum_even variable */
			sum_even += a;
		}
		/* Calculate the next Fibonacci term and update variables 'a' and 'b' */
		temp = a;
		a = b;
		b += temp;
	}

	return sum_even;
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

	/* Print the result, which is the sum of even-valued Fibonacci terms */
	printf("%d\n", result);

	return 0;
}

