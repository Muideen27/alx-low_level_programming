#include "main.h"
#include <stdlib.>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of input args
 * @argv: array of input arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int ln1 = 0, ln2 = 0, i = 0, size = 0;
	char *ptr = NULL;
	int offn1 = 0, offn2 = 0;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	ln1 = _strlen(argv[1], &offn1);
	ln2 = _strlen(argv[2], &offn2);
	size = ln1 + ln2;
	ptr = malloc(size);
	if (ptr == NULL)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 0; i < size; i++)
		ptr[i] = '\0';

	if (multip(&argv[1][offn1], &argv[2][offn2], ln1, ln2, ptr))
	{
		free(ptr);
		_puts("Error");
		exit(98);
	}

	for (i = 0; i < size; i++)
		ptr[i] = ptr[i] + 48;

	_putNum(ptr, size);

	free(ptr);
	return (0);
}

/**
 * multip - multiplies two input strings
 * @n1: first string number to multiply with n2
 * @n2: secodn string number to multiply with n1
 * @ln1: lenght of n1
 * @ln2: lenght of n2
 * @res: pointer where the result will be stored
 * Return: 0 on success, 1 other wise
 */

int multip(char *n1, char *n2, int ln1, int ln2, char *res)
{
	int i, j, k = 0, x = 0;
	int carry = 0;
	int oper = 0;
	int size = ln1 + ln2 - 1;

	for (i = 0; i < ln1; i++)
	{
		if (n1[i] < '0' || n1[i] > '9')
			return (1);
		n1[i] = n1[i] - '0';
	}

	for (i = 0; i < ln2; i++)
	{
		if (n2[i] < '0' || n2[i] > '9')
			return (1);
		n2[i] = n2[i] - '0';
	}

	for (i = ln2 - 1; i >= 0; i--)
	{
		carry = 0;
		k = size - x;
		for (j = ln1 - 1; j >= 0; j--)
		{
			oper = (n2[i] * n1[j]) + res[k] + carry;
			carry = oper / 10;
			res[k--] = (oper % 10);
		}

		res[k--] = carry;
		x++;
	}

	return (0);
}

/**
 * _puts - prints a string followed by anew line
 * @str: input string to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}

/**
 * _putNum - prints a char array of nums followed by a new line
 * @n: input string number to be printed
 * @len: lenght to be printed
 * Return: void
 */

void _putNum(char *n, int len)
{
	int i = 0;

	while (len > 0)
	{
		_putchar(n[i]);
		i++;
		len--;
	}
	_putchar('\n');
}


/**
 * _strlen - obtains the length of a string
 * @s: char pointer to the first position in string
 * @offs: offset to first character != 0
 * Return: the length of the string as an int
 */

int _strlen(char *s, int *offs)
{
	int count = 0;
	int first = 0;

	while (*s != '\0')
	{
		if (*s != '0' && first == 0)
		{
			first = 1;
		}
		else if (first == 0)
		{
			*offs = *offs + 1;
			s++;
			continue;
		}

		if (first != 0)
			++count;
		s++;
	}
	return (count);
}
