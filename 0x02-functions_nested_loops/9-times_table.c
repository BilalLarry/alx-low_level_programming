#include <stdio.h>

/**
 * times_table - Prints the 9 times table starting with 0.
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;
			if (col == 0)
				printf("%2d", result);
			else
				printf(", %2d", result);
		}
		printf("\n");
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	times_table();
	return (0);
}

