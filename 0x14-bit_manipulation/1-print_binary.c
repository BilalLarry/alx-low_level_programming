#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal number
 * @n: number in  binary
 */
void print_binary(unsigned long int n)
{
int bil, sum = 0;
unsigned long int read;
for (bil = 63; bil >= 0; bil--)
{
read = n >> bil;

if (read & 1)
{
_putchar('1');
sum++;
}
else if (sum)
_putchar('0');
}
if (!sum)
_putchar('0');
}

