#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, form 0 to 14, followed by
 * a new line
 */

void more_numbers(void)
{
	int num1, num2;

	for (num1 = 1; num1 <= 10; num1++)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			_putchar(num2);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
