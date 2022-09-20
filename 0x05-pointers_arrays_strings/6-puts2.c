#include "main.h"

/**
 * puts2 - functions that prints every other character of a string, starting
 * with the first character follwed by a new line
 * @str: string to be printed
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] <= '\0'; count += 2)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
}
