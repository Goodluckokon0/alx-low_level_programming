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
	unsigned int i, j;
	unsigned int bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bool = 0;
				break;
			}
		}
		if (bool = 1)
			break;
	}
	return (i);
}
