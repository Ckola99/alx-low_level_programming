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
	int n;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
        {
		n = (len - 1) / 2;
	}

	for (i = n; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
