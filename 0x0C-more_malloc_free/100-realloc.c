#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc- function that reallocates a memory block using malloc and free.
 * @ptr - void pointer;
 * @new_size - Integer
 * @old_size - Integer
 * Return: Pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (old_size == new_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == 0 && (ptr == NULL))
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
}
