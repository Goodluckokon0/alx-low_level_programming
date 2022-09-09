#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the single digits of base 10 numbers
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
