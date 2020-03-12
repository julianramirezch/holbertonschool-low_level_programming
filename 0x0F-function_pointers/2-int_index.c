#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: array
 * @size: integer size
 * @cmp: Pointer to function
 * Return: Void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cont1;

	if (size <= 0)
		return (-1);
	for (cont1 = 0; cont1 < size ; cont1++)
	{
		if (cmp(array[cont1]))
			return (cont1);
	}
	return (cont1);
}
