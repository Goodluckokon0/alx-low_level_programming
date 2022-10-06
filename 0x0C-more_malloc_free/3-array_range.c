#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered from
 * min to max, inclusive
 * @min: the first value of array
 * @max: the last value of array
 * Return: if min > max or the function fails - NULL.
 * othrewise - a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min++;
	return (p);
}
