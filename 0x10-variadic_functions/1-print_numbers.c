#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints input numbers with a given separator between them.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sep = 1;

	if (separator == NULL)
	{
		sep = 0;
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));

		if (i < n - 1 && sep != 0)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
