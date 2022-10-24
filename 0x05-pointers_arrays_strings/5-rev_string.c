#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: character to print
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0, a = 0, Aux;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > a)
	{
		Aux = (s[i]);
		s[i--] = s[a];
		s[a++] = Aux;
	}
}
