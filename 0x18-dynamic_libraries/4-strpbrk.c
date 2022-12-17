#include "main.h"

/**
 * _strpbrk - Function locates the first occurence of the string s of
 * any of the bytes in the string accept
 * @s: first string
 * @accept: second string
 * Return: a pointer to the bytes s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
