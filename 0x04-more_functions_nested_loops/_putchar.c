#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c
 * @c: The character to be printed 
 * Return: on success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
