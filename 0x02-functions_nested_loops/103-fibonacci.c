#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1, second = 2, temp;
	long int sum = 2; // Initialize sum with 2 to account for the initial even value (second = 2)

	while (second <= 4000000)
	{
		temp = first + second;
		if (temp % 2 == 0)
			sum += temp;

		first = second;
		second = temp;
	}

	printf("The sum of the even-valued terms in the Fibonacci sequence "
	       "whose values do not exceed 4,000,000 is: %ld\n", sum);

	return (0);
}

