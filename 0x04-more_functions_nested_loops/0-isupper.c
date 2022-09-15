#include "main.h"

/**
 * _isupper - checks for a uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase character else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
