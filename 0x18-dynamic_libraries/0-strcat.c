#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to append by src
 * @src: string to append to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; (dest[i + j] = *src++) != '\0';)
	{
		j++;
	}

	return (dest);
}
