#include "main.h"

/**
 * print_diagonal - prints a square, followed by a new line.
 * @n: is the square dimensions.
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
			for (int j = 0; j < n; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
