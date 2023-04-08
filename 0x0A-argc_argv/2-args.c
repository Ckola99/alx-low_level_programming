#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int print_arg(char *argv[]);

int main(int argc, char *argv[])
{
	print_arg(argv);
	return (0);
}

/**
 * print_arg() function takes an array
   of pointers to strings (char *argv[]) as its parameter.
 * @argv: is an argument.
 *  Returns: (0)
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
