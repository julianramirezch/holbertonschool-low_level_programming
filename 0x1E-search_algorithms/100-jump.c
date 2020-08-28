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
	unsigned int jump, i, j;

	if (size <= 1)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] < value)
			printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n", i - jump, i);
			for (j = i - jump; j <= i; j++)
			{
				printf("Value checked array[%i] = [%i]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}

	if (i + jump > size)
	{
		printf("Value found between indexes [%i] and [%i]\n", i - jump, i);
		for (j = i - jump; j < size; j++)
			printf("Value checked array[%i] = [%i]\n", j, array[j]);
	}

	return (-1);
}
