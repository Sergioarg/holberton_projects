#include "holberton.h"
/**
 * print_line - this function print the line
 * @n: the parameter to print the line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
		print_line(n - 1);
	}
}
