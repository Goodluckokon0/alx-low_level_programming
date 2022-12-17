#include "main.h"

/**
 * _strcat - Function that appends the src string to the dest string,
 * overwriting the terminating null byte (\o) at the end of the dest,
 * and then adds a terminting null byte
 * @dest: destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int len = 0;

	while (dest[index] != '\0')
		index++;
	for (len = 0; src[len]; len++)
	{
		dest[len + index] = src[len];
	}
	return (dest);
}
