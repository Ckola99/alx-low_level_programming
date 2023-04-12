#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t s1_len;
	size_t s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	result = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (result == NULL)
	{
		return NULL;
	}

	strcpy(result, s1);
	strcpy(result + s1_len, s2);

	return result;
}
