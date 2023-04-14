#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (old_size < new_size)
	{
		min_size = old_size;
	}
	else
	{
		min_size = new_size;
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}


	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}
