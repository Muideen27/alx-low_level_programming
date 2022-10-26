#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of byte to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (j < n && *(src + j))
	{
		j++;
	}
	{
		*(dest + i) = *(src + j);
	}
	if (j > n)
		*(dest + i) = *(src + j);
	return (dest);
}
