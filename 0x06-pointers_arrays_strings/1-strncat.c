#include "main.h"

/**
 * _strncat - Function that append n bytes of src string to the dest string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes of src string to be appended to the dest string
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int len = 0;

	while (dest[index++])
		len++;
	for (; src[index] < n; index++)
	{
		dest[len + index] = src[index];
	}
	return (dest);
}