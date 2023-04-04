#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int bytes;
	int matched;

	bytes = 0;
	matched = 1;

	for (i = 0; s[i] != '\0' && matched; i++)
	{
		matched = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				matched = 1;
				break;
			}
		}
	}
	return (bytes);
}
