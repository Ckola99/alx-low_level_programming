#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: input to print lines.
 * Return: void.
 */


void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			putchar('_');
		}
		putchar('\n');
	}

	if (n <= 0)
	{
		putchar('\n');
	}
}
