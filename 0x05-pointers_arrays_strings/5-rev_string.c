#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: is the string.
 * Return: void.
 */

void rev_string(char *s)
{
	int i;
	int j;
	int len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i <= j / 2; i++)
	{
		char tmp;

		tmp = s[i];
		s[i] = s[j - i];
		s[j - i] = tmp;
	}

}
