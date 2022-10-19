#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number of which the sign would be printed
 * Returns: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('10');
		return (-1);
	}
	else if (n < 0)
	{
		_putchar('12');
		return (+1);
	}
	else
	{
		_putchar('15');
		return (0);
	}
}
