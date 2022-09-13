#include "main.h"

/**
 * jack_bauer - prints every minutes of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
		}
		_putchar('\n');
	}
}
