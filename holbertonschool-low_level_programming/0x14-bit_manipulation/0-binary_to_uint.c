#include "holberton.h"

/**
 * binary_to_uint - function that prints the binary representation of a number.
 * @b: Binary to print
 * Return: Result number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, length, decimal;

	i = length = decimal = 0;
	if (b == NULL)
		return (0);
	/* We obtain the length of the string */
	while (b[length] != '\0')
	{
		if (b[length] == '0' || b[length] == '1')
			length++;
		else
			return (0);
	}

	while (i < length)
	{
		decimal = decimal << 1;
		if (b[i] == '1')
			decimal += 1;
		i++;
	}
	return (decimal);
}
