#include "holberton.h"
/**
 * print_alphabet_x10 - this funtion print the alphabet x10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 0; n <= 9; ++n)
	{
		for (l = 97; l <= 122; ++l)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
