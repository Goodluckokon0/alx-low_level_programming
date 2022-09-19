#include "main.h"

/**
 * puts_half - function that prints half of a string fellowed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int count = 0, half;

	while (*(str + count) != '\0')
		count++;
	if ((count % 2) == 0)
		half = count / 2;
	else if ((count % 2) == 1)
		half = (count - 1) / 2;
	for (half++; half < count; half++)
		_putchar(str[half]);
	_putchar('\n');
}
