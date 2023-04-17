#include "holberton.h"
/**
* print_last_digit - print the last digit of the number
* @n: is the parameter to use in this function
* Return: Always 0.
*/

int print_last_digit(int n)
{
	n = n % 10;
	if (n > 0)
	{
		_putchar(n + '0');
	}
	else
	{
		n = n * -1;
		_putchar(n + '0');
	}
	return (n);
}
