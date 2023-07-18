#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The number representing the highest multiplier (up to 15).
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				result = row * col;
				if (col == 0)
					printf("%2d", result);
				else
					printf(", %3d", result);
			}
			printf("\n");
		}
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 9;

	printf("Times table up to %d:\n", num);
	print_times_table(num);

	num = 20;
	printf("Times table up to %d:\n", num);
	print_times_table(num);

	return (0);
}

