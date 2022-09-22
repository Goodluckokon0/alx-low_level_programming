#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: A pointer to the string
 */
char *rot13(char *str)
{
	int count = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + count) == alpha[i])
				*(str + count) == rot13[i];
					break;
		}
		count++;
	}
	return (str);
}
