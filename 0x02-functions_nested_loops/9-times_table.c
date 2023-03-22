#include "main.h"

/**
 * times_table - prints the times tables.
 * Return: void.
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int num = i * j;

			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
