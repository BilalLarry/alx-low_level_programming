#include "main.h"

/**
 * flip_bits - reads the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, read = 0;
unsigned long int curr;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
curr = exclusive >> i;
if (curr & 1)
read++;
}
return (read);
}
