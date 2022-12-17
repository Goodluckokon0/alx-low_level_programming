#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The input integer
 * Return: n if the integer is greater than or equals zero,
 * else -n.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
