#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array: array to be searched
 * @size: size of array
 * @value: value to search on array
 * Return: index of found value or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

