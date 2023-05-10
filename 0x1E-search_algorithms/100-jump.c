#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that uses jump search
 * @array: array to search on
 * @size: size of array
 * @value: value to be searched
 * Return: Index of first value or -1 on fail
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = 0;

	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			printf("Value checked array[%ld] is out of range\n", prev);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	for (i = prev; i < size && i < step; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
