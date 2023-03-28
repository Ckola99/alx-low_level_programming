#include "main.h"
#include <stdio.h>

/**
 * print_array -prints elements of an array of integers, followed by a new line
 * @n: is number or index.
 * @a: is the pointer to the char.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			break;
		}
		printf(",");
		printf(" ");
	}
	printf("\n");
}
