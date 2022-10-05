#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a afunction that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; j < len2; i++, j++)
	{
		*(ptr + i) = *(s2 + j);
	}
	return (ptr);
}
