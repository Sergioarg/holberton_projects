#include "holberton.h"
/**
 * _strcmp - function compares two strings.
 * @s1: is the first string to compare.
 * @s2: is the second string to compare.
 * Return: r.
 */
int _strcmp(char *s1, char *s2)
{
	int r = *s1 - *s2;

	while (*s1 != '\0' && *s2 != '\0' && r == 0)
	{
		s1++;
		s2++;
		r = *s1 - *s2;
	}
	return (r);
}
