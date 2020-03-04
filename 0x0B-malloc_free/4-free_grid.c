#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid-  function that frees a 2 dimensional grid previously created.
 * @grid: Array of pointer
 * @height: Integer
 * Return: alloc
 */

void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
