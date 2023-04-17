#include "holberton.h"
/**
 * print_triangle - print a triangule of #
 * @size: is the parameter for calculate the size of the line
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	for (i = 0; i < size; i++)
	{
		for (j = size; j >= i + 2; j--)
			_putchar(' ');
		for (k = 0; k < i + 1; k++)
			_putchar('#');
		_putchar('\n');
	}
}
