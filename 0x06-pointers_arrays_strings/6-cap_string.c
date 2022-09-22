#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: The string to capitalize words
 * Return: A pointer to the string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if ((str[i] == ' ' ||
				str[i] == '\t' ||
				str[i] == '\n' ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}') && str[i + 1] >= 'a' &&
				str[i + 1] <= 'z')
			str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
