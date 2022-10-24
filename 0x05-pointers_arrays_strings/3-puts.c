#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: Always 0
 */

void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\n' ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
