#include "main.h"

/**
 * get_endianness - checks if  machine is little or big endian
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
unsigned int r = 1;
char *g = (char *) &r;
return (*g);
}

