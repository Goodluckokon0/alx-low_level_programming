#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled  from
 * @argc: number of arguments
 * @argv: array  of arguments
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
