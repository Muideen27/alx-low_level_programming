#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @x: Number to be checked
 * Return: 1 if c is upper 0 if otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
