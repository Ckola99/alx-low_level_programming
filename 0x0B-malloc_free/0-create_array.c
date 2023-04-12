#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	// Check if size is zero
	if (size == 0)
	{
		return NULL;
	}

	// Allocate memory for the array
	char *arr = (char*)malloc(size * sizeof(char));

	// Check if memory allocation was successful
	if (arr == NULL)
	{
		return NULL;
	}

	// Initialize the array with the specified char
	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
