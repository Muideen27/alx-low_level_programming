#include "main.h"

/**
 * _islower ->  check for character this lowercase
 * @c: The character to be checked
 * Return: 1 i	if charater is lower, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
