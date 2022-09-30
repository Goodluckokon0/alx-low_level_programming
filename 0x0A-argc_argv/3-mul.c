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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
