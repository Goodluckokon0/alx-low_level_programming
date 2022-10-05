#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter
 * @str: the string
 * Return: NULL if str == NULL, or a pointer to the duplicated string on
 * success
 */
char *_strdup(char *str)
{
	unsigned int j, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*(str + len) != '\0')
		len++;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
	{
		*(ptr + j) = *(str + j);
	}
	return (ptr);
}
