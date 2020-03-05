#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked- malloc_checked.
 * @b: Unsigned Integer.
 * Return: 0.
 */

void *malloc_checked(unsigned int b)
{
	void *m;
	
	m = malloc(b);
	if (m == NULL)
		exit(98);
	return(m);
}
