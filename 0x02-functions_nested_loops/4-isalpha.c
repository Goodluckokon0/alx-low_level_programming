#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a alphabetic character, 0 if not
 */

int _isalpha(int c)
{
	char lwr, upr;

	for (lwr = 'a'; lwr <= 'z'; lwr++)
	{
		for (upr = 'A'; upr <= 'Z'; upr++)
		{
			if (c == upr || c == lwr)
				return (1);
		}
	}
	return (0);
}
