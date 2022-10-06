#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int a, b, c, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		n = b;
	c = a + n;
	sout = malloc(c + 1);
	if (sout == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
		if (i < a)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - a];
	sout[i] = '\0';
	return (sout);
}
