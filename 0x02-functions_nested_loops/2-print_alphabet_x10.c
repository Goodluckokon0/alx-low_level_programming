#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase followed
 * by a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int index;

	for (index = 0; index <= 9; index++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
