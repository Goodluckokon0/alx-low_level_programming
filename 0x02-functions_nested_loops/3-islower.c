#include "main.h"

/**
 * _islower - checkes for lowerecase character
 * @c: character to check
 * Return: 1 if c is a lower character else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
