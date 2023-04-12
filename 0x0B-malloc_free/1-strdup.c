#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */


char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc((strlen(str) + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);
	return (copy);
}
