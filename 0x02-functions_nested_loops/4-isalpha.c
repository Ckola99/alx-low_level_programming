#include "main.h"

/**
 * _isalpha - checks if input is alphabet or not.
 * @c: The character to be checked.
 * Return: 1 if alphabet and 0 if not alphabet.
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
