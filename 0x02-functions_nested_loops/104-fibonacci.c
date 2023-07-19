#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long first = 1, second = 2, temp;
	int count, max_count = 98;

	printf("%lu, %lu", first, second);

	for (count = 2; count < max_count; count++)
	{
		temp = first + second;
		printf(", %lu", temp);

		first = second;
		second = temp;
	}

	printf(",0\n");
	return (0);
}

