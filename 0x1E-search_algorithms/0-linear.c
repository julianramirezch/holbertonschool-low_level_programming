#include "search_algos.h"

/**
 * linear_search - searches using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: Index where is located the value or -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
