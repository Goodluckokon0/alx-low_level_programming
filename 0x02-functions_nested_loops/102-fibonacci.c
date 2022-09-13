#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{
	long int a, b, c, d;

	b = 1, c = 2;
	for (a = 1; a <= 50; a++)
	{
		printf("%ld", b);
		d = b + c;
		b = c;
		c = d;
		if (a == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
