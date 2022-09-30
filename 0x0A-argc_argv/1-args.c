#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the number of arguments passed to it
 * @argc: The number of argument passed int to
 * @argv: The list of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
