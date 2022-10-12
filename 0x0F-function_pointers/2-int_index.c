#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: array size
 * @cmp: function pointer
 * Return: index to the first element for which the cmp function does
 * not return 0, -1 if size <= 0 or if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
