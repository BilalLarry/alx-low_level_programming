#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to pieces to print.
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int p, q;

	for (p = 0; p < 8; p++)
	{
		for (q = 0; q < 8; q++)
		{
			putchar(a[p][q]);
		}
		putchar('\n');
	}
}
