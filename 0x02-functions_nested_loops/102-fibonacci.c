#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long first = 1, second = 2, temp;
    int count, max_count = 50;

    printf("%lu, %lu", first, second);

    for (count = 2; count < max_count; count++)
    {
        temp = first + second;
        printf(", %lu", temp);

        first = second;
        second = temp;
    }

    printf("\n");
    return (0);
}

