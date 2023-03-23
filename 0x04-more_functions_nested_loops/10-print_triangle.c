#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: gives us the parameters.
 * Return: void.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		for (int row = 0; row < size; row++)
		{
			for (int space = 0; space < size - row - 1; space++)
			{
				_putchar(' ');
			}

			for (int column = 0; column <= row; column++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
