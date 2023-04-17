#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: is the index
 * @n: Binary to print
 * Return: Value of bits.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value_bit;

	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	else
	{
		value_bit = ((int)(n >> index) & 1);
		return (value_bit);
	}
	return (0);
}
