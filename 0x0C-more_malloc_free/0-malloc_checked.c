#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of byte to be allocated
 * Return: void pointer to new allocated memory, exit with 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	if (b <= 0)
		exit(98);

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
