#include "function_pointers.h"

/**
 * array_iterator - executes a function.
 * @array: Array
 * @size: Structure
 * @action: Pointer to function:
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t cont1;

	if (array && action)
	for (cont1 = 0 ; cont1 < size ; cont1++)
		action(array[cont1]);
}
