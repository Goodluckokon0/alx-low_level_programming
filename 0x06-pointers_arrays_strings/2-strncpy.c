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

	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
