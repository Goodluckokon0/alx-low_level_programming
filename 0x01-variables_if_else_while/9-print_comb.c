#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the possible combinations
 * of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	if (num == 57)
		break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
