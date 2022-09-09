#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in both lower
 * and uppercae
 * Return: 0
 */

int main(void)
{
	char upr;
	char lwr;

	for (upr = 'A'; upr <= 'Z'; upr++)
	{
		for (lwr = 'a'; lwr <= 'z'; lwr++)
		{
			putchar(lwr);
			putchar(upr);
		}
		putchar('\n');
	}
	return (0);
}
