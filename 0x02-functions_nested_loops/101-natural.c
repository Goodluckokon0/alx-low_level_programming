#include <stdio.h>

/**
 * main - prints the sum of the miltiples of 3 0r 5 below 1024
 * Return: 0
 */

int main(void)
{
	int a, b;
	int sum = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0);
			sum += a;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
