#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: contains the binary number
 *
 * Return:  converted number
 */
unsigned int binary_to_uint(const char *b)
{
int fk;
unsigned int dec_val = 0;

if (!b)
return (0);

for (fk = 0; b[fk]; fk++)
{
if (b[fk] < '0' || b[fk] > '1')
return (0);
dec_val = 2 * dec_val + (b[fk] - '0');
}
return (dec_val);
}
