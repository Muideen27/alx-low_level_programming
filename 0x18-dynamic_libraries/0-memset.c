#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *@s: pointer that has the address of the memory to fill
 *@b: constant byte that will be written into the memory
 *@n: amount of times the byte will be written into the memory
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
