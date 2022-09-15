#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: The size of the square
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
		for (0 = 1; a <= size; a++)
		{
			for (b = 0; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
