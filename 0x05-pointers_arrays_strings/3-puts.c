#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: strin to print
 */
void _puts(char *str)
{
wile (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
