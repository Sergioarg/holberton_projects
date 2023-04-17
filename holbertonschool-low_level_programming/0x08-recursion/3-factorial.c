#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: is the number to factor
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
