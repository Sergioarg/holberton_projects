#include "holberton.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: firts tring to concatenate
 * @s2: second string to concatenate
 * Return: Always 0.
 */
char **strtow(char *str)
{
	unsigned int i, j, k, l;
	char **ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	if( *str == "")
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{}

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{}
}
