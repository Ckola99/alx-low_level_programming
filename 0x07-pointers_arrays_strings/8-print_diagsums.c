#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

int main(void)
{
	int c3[3][3] = {
	    {0, 1, 5},
	    {10, 11, 12},
	    {1000, 101, 102},
	};
	int c5[5][5] = {
	    {0, 1, 5, 12124, 1234},
	    {10, 11, 12, 123521, 12512},
	    {1000, 101, 102, 12545, 214543435},
	    {100, 1012451, 11102, 12545, 214543435},
	    {10, 12401, 10452, 11542545, 1214543435},
	};
	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
	return (0);
}

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0, d2 = 0;
	for (i = 0; i < size * size; i += size + 1)
	{
		d1 += a[i];
		d2 += a[i + size - 1];
	}
	printf("%d, %d\n", d1, d2);
}
