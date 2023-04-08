#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int print_arg(char *argv[]);

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	print_arg(argv);
	return (0);
}

/**
 * print_arg - is a function that adds the command line arguments.
 * @argv: is the argument.
 * Return: sum.
*/

int print_arg(char *argv[])
{
	if (argv == NULL)
	{
		return (0);
	}

	printf("%s\n", argv[0]);
	return (print_arg(argv + 1));
}
