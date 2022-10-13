#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @seperator: string to be printd between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
