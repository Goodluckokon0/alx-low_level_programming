#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: initial bytes
 * @accept: accepted bytes
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int byte = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; accept++)
		{
			while (s[i] == accept[j])
				byte++;
		}
	}
	return (byte);
}
