#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	char *tmp;

	while (*s != '\0')
	{
		tmp = accept;
		while (*tmp != '\0')
		{
			if (*s == *tmp)
			{
				return (s);
			}
			tmp++;
		}
		s++;
	}
	return (NULL);
}