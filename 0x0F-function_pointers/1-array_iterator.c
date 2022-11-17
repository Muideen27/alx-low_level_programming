#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_iterator - executes a function given as a parameter
 on each element of an array
 *@array: the array that will be used
 *@size: size of the array
 *@action: the fuction that will be used on each element of @array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL || array == NULL)
		return;

	while (size--)
		action(array[i++]);
}
