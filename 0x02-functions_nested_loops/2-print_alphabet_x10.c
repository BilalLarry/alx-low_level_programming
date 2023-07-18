#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 *                      followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
	}

	putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

