#include <stdio.h>

/**
 * _putchar - write character c to the stdout
 * @c: character to be printed
 * Return: on Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
