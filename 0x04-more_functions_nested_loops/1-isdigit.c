#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: digit to check
 * Return: 1 if c is digit from 0 to 9, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
