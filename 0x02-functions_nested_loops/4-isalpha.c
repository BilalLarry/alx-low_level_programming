#include <stdio.h>

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return 1;
}
return 0;
}
