#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');
	return (0);
}
