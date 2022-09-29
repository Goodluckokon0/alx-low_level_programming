#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: input number to find its factorial
 * Return: if n < 0, -1 to indicate an error, factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
