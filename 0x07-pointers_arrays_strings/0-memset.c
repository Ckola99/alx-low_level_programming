#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @s: The memory area to be filled.
 * @b: The character to fill the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		s[i] = 0x01;
	}
	return (s);
}