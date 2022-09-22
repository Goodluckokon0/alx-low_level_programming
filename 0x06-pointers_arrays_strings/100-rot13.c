#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: A pointer to the string
 */
char *rot13(char *str)
{
	int count = 0;
	int i;
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z'};
	char rot13[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M'};

	while (str[count])
	{
		for (i = 0; i < 52; i++)
		{
			if (str[count] == alpha[i])
			{
				str[count] == rot13[i];
				
				break;
			}
		}
		count++;
	}
	return (str);
}
