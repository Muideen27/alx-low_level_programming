#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
