#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase except
 * the letter q and e
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
