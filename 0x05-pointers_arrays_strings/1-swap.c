#include "main.h"

/**
 * void swap_int - swaps the values of two integers.
 * @a: First integer to swap
 * @b: Second integer to swap
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
		*a = *b;
		*b = x;
}
