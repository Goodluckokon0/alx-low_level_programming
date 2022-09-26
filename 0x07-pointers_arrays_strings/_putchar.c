#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to input
 * Return: 0 on success, -1 on error and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
