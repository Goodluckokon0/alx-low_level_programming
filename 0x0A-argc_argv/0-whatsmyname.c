#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its name followed by a new line
 * @argc: The number of arguments
 * @argv: The list of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
