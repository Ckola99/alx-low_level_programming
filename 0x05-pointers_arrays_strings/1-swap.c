#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: is the pointer for a.
 * @b: is the pointer for b.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int *tmp = *a;
	*a = *b;
        *b = *tmp;
}