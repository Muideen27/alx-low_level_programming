#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, k;

	n = n - 1;
	while (i < n)
	{
		k = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = k;
		i++;
		n--;
	}
}
