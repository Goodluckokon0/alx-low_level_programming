#include "main.h"

/**
 * _strncpy - Function that copies n number of bytes from the src
 * string to the dest string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to be appended from src to dest
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;
	int len = 0;

	for (index = 0; src[index] < n; index++)
	{
		dest[index] = src[index];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
