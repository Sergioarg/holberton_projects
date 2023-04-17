#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: is the first string to use to copy.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	/* Validate if is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* We take the size of the string to reserve the space */
	for (i = 0; str[i] != '\0'; i++)
	{}

	new_str = malloc(sizeof(char) * (i + 1));

	/*check if the new sting is null */
	if (new_str == NULL)
	{
		return (NULL);
	}
	/* Stores the content of str in new str */
	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(new_str + j) = *(str + j);
	}
	return (new_str);
}
