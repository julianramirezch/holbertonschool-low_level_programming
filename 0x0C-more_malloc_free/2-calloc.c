#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Unsigned int.
 * @size: Unsigned int.
 * Return: Pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cp;
	unsigned int cont1;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cp = malloc(size * nmemb);
	if (cp == NULL)
		return (NULL);
	for (cont1 = 0; cont1 < nmemb ; cont1++)
	{
		cp[cont1] = '\0';
	}
	return (cp);
}
