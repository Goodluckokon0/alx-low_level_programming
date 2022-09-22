#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: the pointer to dest
 */
char *leet(char *str)
{
	int count = 0, i;
	int lwr[] = {97, 101, 111, 116, 108};
	int upr[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == lwr[i] || *(str + count) == upr[i])
			{
				*(str + count) = num[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
