#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int a, b;


	if (size <= 0)
		_putchar('\n');
	else
	{


		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
				_putchar(' ');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
