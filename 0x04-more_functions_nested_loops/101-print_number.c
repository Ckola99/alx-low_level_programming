#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number being printed.
 * Return : void.
 */

void print_number(int n)
{
	if (n > 99 && n < 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}

	if (n == 0)
	{
		_putchar('0');
	}

	if (n < 99 && n > 0)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}

	if (n < -10)
	{
		_putchar('-');
		_putchar((-1 * n / 10) + '0');
		_putchar((-1 * n % 10) + '0');
	}
	if (n > 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}

}
