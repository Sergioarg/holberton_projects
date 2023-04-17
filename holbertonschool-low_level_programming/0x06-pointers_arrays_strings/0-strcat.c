#include "holberton.h"
/**
 * len - Function calculates the length of a given string.
 * @dest: pointer to destination.
 * Return: Always 0.
 */
int len(char *dest)
{
	return ((*dest != '\0') ? 1 + len(dest + 1) : 0);
}
/**
 * _strcat - function that copies a string.
 * @dest: This is pointer to the destination array.
 * @src: This is the string to be appended.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	char *d_itter = dest + len(dest);

	while (*src != '\0')
	{
		*d_itter = *src;
		src = src + 1;
		d_itter = d_itter + 1;
	}
	*d_itter = *src;
	return (dest);
}
