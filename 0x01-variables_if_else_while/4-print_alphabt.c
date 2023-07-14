#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;

	do {
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			putchar(lowercase);
		}
	} while (lowercase != 'q' || lowercase != 'e');

	return (0);
}

