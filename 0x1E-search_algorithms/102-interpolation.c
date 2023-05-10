#include "search_algos.h"
/**
 * interpolation_search - function that uses interpolation search
 * @size: size of array
 * @array: array to search on
 * @value: value to search on array
 * Return: index of value found or -1 on fail
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	if (size <= 0)
		return (-1);
	if (pos > size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	else if (array[pos] > value)
	{
		high = pos - 1;
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
	}

	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			pos++;
		else
			break;
	}
	return (-1);
}
