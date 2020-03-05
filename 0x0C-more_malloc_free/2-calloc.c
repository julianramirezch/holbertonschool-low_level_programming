#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Unsigned int.
 * @size: Unsigned int.
 * Return: Pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cp;
	int cont1;
	int size2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	size2 = nmemb * size;
	cp = malloc(nmemb);
	if (cp == NULL)
		return (NULL);
	for (cont1 = 0; cont1 < size2 ; cont1++)
	{
		cp[cont1] = '\0';
	}
	return (cp);
}
