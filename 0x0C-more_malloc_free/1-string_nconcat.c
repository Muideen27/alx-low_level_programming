#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: amount of chars touse of second string
 *Return: a pointer to the concatenated string or NULL if the process fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i_s1, i_s2, len1, len2;
	char *a;

	if (s1 == 0)
		s1 = "";
	for (len1 = 0; s1[len1] != 0; len1++)
	{
	}
	if (s2 == 0)
		s2 = "";
	for (len2 = 0; s2[len2] != 0; len2++)
	{
	}
	if (n >= len2)
		a = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		a = malloc(sizeof(char) * (len1 + n + 1));
	if (a == 0)
		return (0);
	for (i_s1 = 0; i_s1 < len1; i_s1++)
		a[i_s1] = s1[i_s1];
	if (n >= len2)
	{
		for (i_s2 = 0; i_s2 < len2; i_s1++, i_s2++)
			a[i_s1] = s2[i_s2];
	}
	else
	{
		for (i_s2 = 0; i_s2 < n; i_s1++, i_s2++)
			a[i_s1] = s2[i_s2];
	}
	a[i_s1] = 0;
	return (a);
}
