#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op = argv[2];
	int (*func)(int, int) = get_op_func(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (*op == '/' || *op == '%')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			exit (100);
		}
	}

	if (func == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	result = func(num1, num2);

	printf("%i\n", result);

	return (0);
}
