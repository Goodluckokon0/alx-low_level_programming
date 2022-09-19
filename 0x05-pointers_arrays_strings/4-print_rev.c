#include "main.h"

/**
 * print_rev - function that prints a string in reverse,
 * followed by a new line
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	 _putchar('\n');
}
