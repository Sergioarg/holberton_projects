#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer.
 * @array: is the array to iterate
 * @size: is the size of the array
 * @cmp: pointer to the function you need to use
 * Return: the (i)terator.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
