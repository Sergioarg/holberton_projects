#include "variadic_functions.h"
/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *letters;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";


	for (i = 0; i < n; i++)
	{
		letters = va_arg(args, char *);

		if (letters == NULL)
			letters = "(nil)";

		printf("%s", letters);

		if (i != (n - 1))
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
