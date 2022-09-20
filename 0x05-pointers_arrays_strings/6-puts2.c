#include "main.h"

/**
 * puts2 - functions that prints every other character of a string, starting
 * with the first character follwed by a new line
 * @str: string to be printed
 */

void puts2(char *str)
{
	int count;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		_putchar(str[count]);
		count += 2;
	}
	_putchar('\n');
}
