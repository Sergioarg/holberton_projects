#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @index: is the index
 * @n: Binary to print
 * Return: Value of bits.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
