#include "holberton.h"
/**
* array_range - Function that creates an array of integers.
* @min: is the min
* @max: is the mix
* Return: array_range.
*/
int *array_range(int min, int max)
{
	int i, length = (max - min) + 1; /*Here we drowned the amount to find*/
	int *array_range;

	if (min > max)
	{
		return (NULL);
	}

	array_range = malloc(length * sizeof(*array_range));

	if (array_range == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; min++, i++)
	{
		*(array_range + i) = min;
	}

	return (array_range);
}
