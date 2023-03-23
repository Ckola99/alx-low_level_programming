#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: is the integer being checked.
 * Return: 1 if c is uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c > 64 && c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
