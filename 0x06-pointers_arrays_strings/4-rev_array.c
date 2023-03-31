#include "main.h"


/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
        int i;
        for (i = 0; i <= n / 2; i++)
	{
		char tmp;

		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}

}
