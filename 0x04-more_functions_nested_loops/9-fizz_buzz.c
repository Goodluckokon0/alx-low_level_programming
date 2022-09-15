#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line, but for
 * multiples of 3 it prints Fizz instead of the number and for multiples of 5
 * it prints Buzz instead of the number and prints FizzBuzz for multiples of
 * 3 and 5 instead of the number
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
