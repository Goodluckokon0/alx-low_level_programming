#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array that contains the command line arguments
 * Return: 1 and print Error if the program does not receive two argument
 * else 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	return (0);
}
