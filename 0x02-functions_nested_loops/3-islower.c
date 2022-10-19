#include "main"

/**
 * _islower - check for character this lowercase
 * @c: a character argument
 * Return: 1 if charater is lower, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
