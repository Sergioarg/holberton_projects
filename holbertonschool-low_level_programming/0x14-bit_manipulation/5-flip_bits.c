#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @m: Long int.
 * @n: Long int.
 * Return: Value of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;

	i = sizeof(n) * 8 - 1;
	while (i >= 0)
	{
		i--;
		if (((n ^ m) >> i) & 1)
			j++;
	}
	return (j);

}
