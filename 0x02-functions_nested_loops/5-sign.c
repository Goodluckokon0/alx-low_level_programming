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
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
		return (-1);
}
