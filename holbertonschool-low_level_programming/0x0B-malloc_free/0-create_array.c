#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - prints buffer in hexa
* @size: the size of the memory to print
* @c: the address of memory to print
*
* Return: s.
*/
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *s;
	/* error if is null */
	if (size == 0)
	{
		return (NULL);
	}
	/* malloc - reserve memory space */
	s = malloc(size * sizeof(char));

	/* possible error */
	if (s == NULL)
	{
		return (NULL);
	}

	/* we go through the arrangement of malloc */
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
