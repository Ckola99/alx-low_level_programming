#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int i;

	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}