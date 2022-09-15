#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: The number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int a, b;


	if (n <= 0)
		_putchar('\n');
	else if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (a == b)
				{
					_putchar('\\');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
