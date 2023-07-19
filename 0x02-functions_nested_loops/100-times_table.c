#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number for which to print the times table (0 <= n <= 15)
 */
void print_times_table(int n)
{
    int row, column, product;

    if (n >= 0 && n <= 15)
    {
        for (row = 0; row <= n; row++)
        {
            _putchar('0');
            for (column = 1; column <= n; column++)
            {
                _putchar(',');
                _putchar(' ');

                product = row * column;

                if (column <= 9)
                    _putchar(' ');
                else if (product <= 99)
                    _putchar(' ');

                if (product >= 100)
                {
                    _putchar((product / 100) + '0');
                    _putchar(((product / 10)) % 10 + '0');
                }
                else if (product <= 99 && product >= 10)
                {
                    _putchar((product / 10) + '0');
                }

                _putchar((product % 10) + '0');
            }
            _putchar('\n');
        }
    }
}

