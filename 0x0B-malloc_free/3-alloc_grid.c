#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid- Returns a pointer to a 2 dimensional array of integers.
 * @width: Integer
 * @height: Integer
 * Return: alloc
 */

int **alloc_grid(int width, int height)
{
	int contp;
	int conta;
	int conta2;
	int **alloc;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);
	if (alloc == NULL)
		return (NULL);
	for (contp = 0 ; contp < height ; contp++)
	{
		alloc[contp] = malloc(sizeof(int) * width);
		if (alloc == NULL)
		{
			for (conta = 0 ; conta < contp ; conta++)
			{
				free(alloc[contp]);
			}
			free(alloc);
			return (NULL);
		}
		for (conta2 = 0 ; conta2 < width ; conta2++)
		{
			alloc[contp][conta2] = 0;
		}
	}
	return (alloc);
}
