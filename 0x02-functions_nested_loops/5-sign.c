#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: input integer
 * Return: 1 and prints + if n is greater than 0,
 * 0 and prints 0 if n equals 0 and -1 and prints -
 * if n is less than 0
 */

int print_sign(int n)
{
	int value;


	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
