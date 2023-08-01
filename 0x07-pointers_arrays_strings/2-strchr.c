#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @c: the character to be located.
 * @s: the string to be searched.
 * Return: if c is found - a pointer to the first occurrence.
 * if c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
