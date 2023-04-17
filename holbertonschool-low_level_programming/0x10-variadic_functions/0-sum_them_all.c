#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: counts of numbers.
 * Return: all its parameters.
 */

int sum_them_all(const unsigned int n, ...) /* ... = n amount of args */
{
	va_list args; /* list all ... -> the args */
	int result = 0;
	unsigned int i;

	va_start(args, n); /* args = ... */

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int); /* agrs[i] */
	}
	va_end(args); /* ends traversal of the variadic function arguments = ... */
	return (result);
}
