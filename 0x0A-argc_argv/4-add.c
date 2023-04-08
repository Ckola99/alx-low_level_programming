#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int total;
	int i;

	total = 0;

	if (argc == 1)
	{
		printf("%d\n", total);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *arg;
			int j;

			j = 0;
			arg = argv[i];

			while (arg[j])
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return 1;
				}
				j++;
			}

			total += atoi(arg);
		}

		printf("%d\n", total);
	}

	return 0;
}
