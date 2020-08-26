#include "search_algos.h"

/**
 * binary_search - searches using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return:  index where value is located or -1 if not
 */

int binary_search(int *array, size_t size, int value)
{
	int *sorted;
	int l = 0, r, m;

	if (size <= 1)
		return (-1);

	sorted = shell_sort(array, size);
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(sorted, l, r);
		m = (l + r) / 2;
		if (sorted[m] < value)
			l = m + 1;
		else if (sorted[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @l: start
 * @r: end
 */
void print_array(const int *array, int l, int r)
{
	while (l <= r)
	{
		printf("%d", array[l]);
		if (l != r)
			printf(", ");
		++l;
	}
	printf("\n");
}

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence.
 * @array: Pointer to array for sorting
 * @size: size of array to sort
 * Return: Return sorted array
 */
int *shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, cmp;
	int temp;

/*Finds the max gap*/
	while (gap < (size / 3))
		gap = gap * 3 + 1;

/*comparing values from begining and from gap*/
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			cmp = i;
			while (cmp >= gap && array[cmp - gap] > temp)
			{
				array[cmp] = array[cmp - gap];
				cmp -= gap;
				array[cmp] = temp;
			}
		}
/*Gap decreases according to Knuth sequence*/
		gap /= 3;
	}

	return (array);
}


