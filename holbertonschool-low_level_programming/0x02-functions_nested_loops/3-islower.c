#include "holberton.h"

/**
 *  _islower - print if c is lower
 *  @c: is the parameter of the function
 *  Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
