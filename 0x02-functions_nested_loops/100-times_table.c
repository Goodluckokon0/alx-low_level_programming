#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: numeber of times
 */

void print_times_table(int n)
{
	int a, b, c;


	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				if (c < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + 48);
				}
				else if (c > 9 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				else if (c > 99 && c < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 10) / 10 + 48);
					_putchar((c / 10) % 10 + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
