#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers from min to max.
 * @min: first value in the range.
 * @max: last value in the range.
 * Return: pointer to newly created array, NULL if fail or worng args
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *ptr = NULL;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		ptr[i] = min + i;

	return (ptr);
}
