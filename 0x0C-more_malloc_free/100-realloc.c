#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc- function that reallocates a memory block using malloc and free. 
 * @old_size- Unsigned int.
 * @new_size- Unsigned int.
 * Return: Pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int size2;
	void *ptr2;
	
	if (old_size == new_size)
		return(ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return(ptr);
	}
	else if (new_size == 0 && (ptr == NULL))
	{
		free(ptr);
		return NULL;
	}
	else if (new_size > old_size)
	{
		ptr = malloc(new_size);
		size2 = new_size - old_size;
		ptr2 = malloc (size2);     
}
}
