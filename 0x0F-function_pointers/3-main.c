#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: number of arguments received.
 * @argv: array of arguments received.
 * Return: 0 on success, 1 otherwise as fail.
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	res = get_op_func(argv[2])(num1, num2);

	printf("%d\n", res);

	return (0);
}
