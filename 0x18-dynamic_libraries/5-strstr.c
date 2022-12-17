#include "main.h"

/**
 * _strstr - Function finds the first occurence of the substring
 * needle in the string haystack. The terminating null bytes are not compared
 * @haystack: The string to be searched
 * @needle: The searched string
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *phaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		phaystack = haystack;
		pneedle = needle;
		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (phaystack);
		haystack = phaystack + 1;
	}
	return (0);
}
