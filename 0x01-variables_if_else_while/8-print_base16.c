#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 48, b = 97; a <= 57, b <= 102; a++, b++)
	{
		putchar(a);
		putchar(b);
	}
	putchar('\n');
	return (0);
}
