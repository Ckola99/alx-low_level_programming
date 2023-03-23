#include "main.h"
#include <stdio.h>

/**
 * more_numbers -prints 10 times the numbers, 0-14, followed by a new line
 *
 * Return: void.
 */

void more_numbers(void)
{
	char alpha[20] = {"01234567891011121314"};

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			_putchar(alpha[j]);
		}
		_putchar('\n');
	}
}
