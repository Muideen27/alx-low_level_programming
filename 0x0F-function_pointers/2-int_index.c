#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: to be iterated.
 * @size: of the array.
 * @cmp: pointer to function that compares values.
 * Return: the index of the first element for which the cmp is != 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
