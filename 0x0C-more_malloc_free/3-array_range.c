#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
