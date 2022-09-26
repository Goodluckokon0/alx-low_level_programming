#include "main.h"

/**
 * _memcpy - Function copies n bytes from memory area src
 * to memory area dest
 * @dest: destination area memory
 * @src: source area memory
 * @n: bytes filled
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
