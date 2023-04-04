#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; a[i] <= a[7]; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}



}
