#include "main.h"
#include <stdlib.h>

/**
 * print_rev - prints string in reverse.
 * @str: is the string.
 * Return - int.
 */

A
int _strlen(char *str)
{
	int len;
	int i;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

void print_rev(char *str)
{
	int i;
	int j;

	j = _strlen(str) - 1;


	for (i = j; i >= 0; i--)
	{
		putchar(str[i]);
	}

}
