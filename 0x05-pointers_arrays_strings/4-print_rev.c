#include "main.h"
#include <stdlib.h>

/**
 * print_rev - prints string in reverse.
 * @str: is the string.
 * Return - void.
 */

void print_rev(char *str)
{
	int i;
	int j;
	int len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	j = len - 1;

	for (i = j; i >= 0; i--)
	{
		puts(str[i]);
	}
	puts('\n');
}
