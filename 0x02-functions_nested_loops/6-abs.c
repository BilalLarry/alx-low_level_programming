#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer for which the absolute value is to be computed.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n >= 0)
		return n;
	else
		return -n;
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = -10;
	int abs_value;

	abs_value = _abs(num);
	printf("The absolute value of %d is %d.\n", num, abs_value);

	return (0);
}

