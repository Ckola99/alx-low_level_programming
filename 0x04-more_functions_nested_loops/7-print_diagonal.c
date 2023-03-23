#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: is the counter to print diagonals.
 * Return: void.
 */

void print_diagonal(int n)
{
	int space;

	if (n <= 0)
	{
		putchar('\n');


	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (space = 0; space < i - 1 + 1; space++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}

	}
}
