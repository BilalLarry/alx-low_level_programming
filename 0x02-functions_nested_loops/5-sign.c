#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to be checked.
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1;
	}
	else if (n == 0)
	{
		putchar('0');
		return 0;
	}
	else
	{
		putchar('-');
		return -1;
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 5;
	int result;

	result = print_sign(num);
	putchar('\n');

	return (0);
}

