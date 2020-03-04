#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid- function that returns a pointer to a 2 dimensional array of integers.
 * @width: Integer
 * @height: Integer
 * Return:
 */ 

int **alloc_grid(int width, int height)
{
if (width <= 0)
	return (NULL);
if (height <= 0)
	return (NULL);
