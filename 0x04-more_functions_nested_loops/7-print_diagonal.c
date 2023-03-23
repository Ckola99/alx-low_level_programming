#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: is the counter to print diagonals../8-squares
 * Return: void.
 */

void print_diagonal(int n)
{
	int space;
	int i;

	if (n <= 0)
	{
		_putchar('\n');


	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i - 1 + 1; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
