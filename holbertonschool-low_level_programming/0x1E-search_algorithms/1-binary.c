#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: int (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, beg = 0, mid, end = size - 1;

	if (array == NULL)
		return (-1);

	while (beg <= end)
	{
		printf("Searching in array: ");
		for (i = beg; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		mid = (beg + end) / 2;
		if (array[mid] < value)
			beg = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
