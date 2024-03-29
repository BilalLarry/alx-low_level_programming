#include "main.c"

/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 for an alphabetic character, 0 for anything else.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

