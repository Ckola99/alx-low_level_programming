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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '5')
		{
			putchar(str[i]);
		}
	}
}
