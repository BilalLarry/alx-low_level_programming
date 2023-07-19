#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to generate the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
    int row, column;

    if (n < 0 || n > 15)
        return;

    for (row = 0; row <= n; row++)
    {
        for (column = 0; column <= n; column++)
        {
            int result = row * column;

            if (column != 0)
                printf(", ");

            printf("%d", result);
        }
        printf("\n");
    }
}

