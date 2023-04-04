#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, k;

	for (a = 0; b < 8; b++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[b][k]);
		}
		_putchar('\n');
	}
}
