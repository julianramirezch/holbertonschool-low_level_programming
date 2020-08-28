#include "search_algos.h"

/**
 * interpolation_search -  searches using the Interpolation search algorithm
* @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return:  first index where value is located or -1 if not
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, idx;

	if (size <= 1)
		return (-1);

	low = 0;
	high = size - 1;

	while (low < high)
	{
		idx = low + ((value - array[low]) * (high - low) /
		(array[high] - array[low]));

		if (idx > size)
			break;

		printf("Value checked array[%li] = [%i]\n", idx, array[idx]);
		if (array[idx] < value)
			low = idx + 1;
		else if (value < array[idx])
			high = idx - 1;
		else
			return (idx);
	}

	if (value == array[low])
		return (low);
	printf("Value checked array[%li] is out of range\n", idx);
	return (-1);
}
