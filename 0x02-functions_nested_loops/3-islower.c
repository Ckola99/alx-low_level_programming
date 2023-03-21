#include "main.h"

/**
 *_islower - checks if character is lower case.
 * @c: is the character to be checked.
 * Return: void.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
