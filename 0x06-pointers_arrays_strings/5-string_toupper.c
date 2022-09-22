#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to upercase
 * @str: The string to manipulate
 * Return: A pointer to the string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
