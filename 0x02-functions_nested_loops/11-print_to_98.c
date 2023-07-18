#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: The starting number.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}

	printf("98\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 50;

	printf("Numbers from %d to 98:\n", num);
	print_to_98(num);

	num = 102;
	printf("Numbers from %d to 98:\n", num);
	print_to_98(num);

	return (0);
}

