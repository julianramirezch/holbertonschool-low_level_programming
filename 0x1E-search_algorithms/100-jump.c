#include "search_algos.h"

/**
 * jump_search - searches using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return:  first index where value is located or -1 if not
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, j, f;

	if (size == 0)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] < value)
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] > value)
		{
			f = i - jump;
			if (f >= jump)
				printf("Value found between indexes [%li] and [%li]\n",
				f - jump, i - jump);
			for (j = (f - jump); j < i; j++)
			{
				printf("Value checked array[%li] = [%i]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		if (i + 1 == size && array[i] < value)
		{
			printf("Value found between indexes [%li] and [%li]\n", i, i + jump);
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
		}
	}

	return (-1);
}
