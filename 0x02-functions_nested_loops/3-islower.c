#include <stdio.h>

/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'g';

	if (_islower(ch))
		printf("%c is a lowercase character.\n", ch);
	else
		printf("%c is not a lowercase character.\n", ch);

	return (0);
}

