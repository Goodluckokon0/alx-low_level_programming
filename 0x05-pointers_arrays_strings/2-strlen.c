#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string
 * Return: always 0
 */
int _strlen(char *s)
{
	int count = 0, len = 0;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	return (len);
}
