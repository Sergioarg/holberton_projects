#include "function_pointers.h"
/**
 * print_name - Function that prints a name.
 * @name: Name variable to print
 * @f: name of the function pointer
 */

void print_name(char *name, void (*f)(char *))
{

	if (f == NULL)
		return;

	if (name == NULL)
		return;

	f(name);
}
