#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: Binary to print
 * Return: Result number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, i = 0; (tmp >>= 1); i++)
	{}

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
