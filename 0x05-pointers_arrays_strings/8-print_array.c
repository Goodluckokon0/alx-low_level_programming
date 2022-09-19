#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * follwed by a new line
 * @a: integer to be printed
 * @n: number of integers to be printed
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", *(a + index));
		if (index != (n - 1))
			printf(", ");
	}
	printf("\n");
}
