#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: is the number being computed.
 * Return: integer value.
 */

int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
		abs_val = c * (-1);
		return (abs_val);
	}
	else
	{
		return (c);
	}
}
