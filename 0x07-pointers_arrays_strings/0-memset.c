#include "main.h"

/**
 * _memset - Function fills the first n bytes of the memory area
 * pointer to by s with the constant byte b.
 * @s: The string
 * @b: The constant byte to fill the string with
 * @n: The number of byte
 * Return: A pointer to tthe memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
