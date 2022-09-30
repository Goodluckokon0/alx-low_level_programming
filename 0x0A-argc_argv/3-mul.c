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
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (i = 1; i < 3; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	return (0);
}
