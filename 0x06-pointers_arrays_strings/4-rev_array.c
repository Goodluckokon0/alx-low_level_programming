#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; a[i] < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
