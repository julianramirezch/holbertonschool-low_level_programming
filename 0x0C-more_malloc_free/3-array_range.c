#include "holberton.h"
#include <stdlib.h>

/**
 * array_range-  function that creates an array of integers.
 * @min: Integer
 * @max: int
 * Return: Point.
 */

int *array_range(int min, int max)
{
	int *range;
	int cont1;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	size++;
	range = malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	for (cont1 = 0 ; cont1 < size ; cont1++)
	{
		range[cont1] = min;
		min++;
	}
	cont1--;
	range[cont1] = cont1;
	return (range);

}
