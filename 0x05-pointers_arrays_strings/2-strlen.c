#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns length
 * @str: is the string.
 * Return: int value of length.
 */

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
