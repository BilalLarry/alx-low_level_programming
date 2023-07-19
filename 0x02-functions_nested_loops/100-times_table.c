#include "main.h"
#include <unistd.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number for which to print the times table (0 <= n <= 15)
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' ');
			}

			if (product < 100)
				_putchar(' ');

			if (product >= 100)
				_putchar(product / 100 + '0');

			if (product >= 10)
				_putchar((product / 10) % 10 + '0');

			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

