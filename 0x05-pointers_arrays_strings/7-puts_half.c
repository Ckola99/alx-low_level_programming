#include "main.h"
#include <stdio.h>

/**
 * puts_half - that prints half of a string, followed by a new line.
 * @str: is the string.
 * Return: void.
 */

void puts_half(char *str)
{
	int i;
	int len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		int half;
		int last;

		last = ((len - 1) / 2);
		half = (len / 2);

		if (i >= half)
		{
			putchar(str[i]);
		}

		if (len % 3 == 0)
		{
			putchar(str[last]);
		}
	}

	if (len % 1 == 0 && len % 3 == 0)
	{
		putchar(str[last]);
	}
	putchar('\n');
}
