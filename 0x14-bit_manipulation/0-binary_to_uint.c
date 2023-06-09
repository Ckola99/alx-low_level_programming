#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i;

	sum = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			sum = (sum << 1) | 1;

		else if (b[i] == '0')
			sum = (sum << 1);

		else
			return (0);
	}
	return (sum);
}
