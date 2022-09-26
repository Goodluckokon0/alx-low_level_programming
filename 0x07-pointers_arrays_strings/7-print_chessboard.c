#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: the chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			_putchar(a[i % 10][j % 10]);
		}
		_putchar('\n');
	}
}
