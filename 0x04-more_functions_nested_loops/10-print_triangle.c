#include "main.h"
#include <stdlib.h>

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: gives us the parameters.
 * Return: void.
 */

void print_triangle(int size)
{
	int row;
	int space;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				putchar(' ');
			}

			for (column = 0; column <= row; column++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
