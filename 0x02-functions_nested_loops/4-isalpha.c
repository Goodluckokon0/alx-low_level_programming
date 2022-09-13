#include "main.h"

/**
 * _isalpha - checkjs for alphabetic character
 * @c: character to check
 * Return: 1 if c is a alphabetic character, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
