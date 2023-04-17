#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: is the array to iterate
 * @size: is the size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
