#include "main.h"

/**
 * more_numbers - print the numbers 0 through 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; ++y)
	{
		for (x = 0; x < 15; ++x)
		{
			if (x > 9)
				_putchar('0' + x / 10);
			_putchar('0' + x % 10);
		}
		_putchar('\n');
	}
}
