#include "search_algos.h"
/**
 * binary_search - function that uses binary search on an array
 * @array: array to search on
 * @size: size of array
 * @value: value to search on array
 * Return: index of found value or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size, mid, i;

	while (start < end)
	{
		printf("Searching in array: ");
		for (i = start; i < end - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end - 1]);

		mid = midpoint(start, end);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid;
		else
			start = mid + 1;

	}
	return (-1);
}
/**
 * midpoint - function to find midpoint of two nums
 * @start: lower number
 * @end: higher number
 * Return: midpoint num
 */
size_t midpoint(size_t start, size_t end)
{
	int num = start + end;

	if (num % 2 == 0)
		num = num / 2 - 1;
	else
		num = num / 2;
	return (num);
}
