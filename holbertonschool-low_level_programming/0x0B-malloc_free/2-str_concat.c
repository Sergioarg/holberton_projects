#include "holberton.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: firts tring to concatenate
 * @s2: second string to concatenate
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k, l;
	int size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	size = i + j;
	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i ; k++)
		*(ptr + k) = *(s1 + k);
	for (l = 0 ; l < j ; l++)
		*(ptr + (k + l)) = *(s2 + l);
	return (ptr);
}
