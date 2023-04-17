#include "holberton.h"

/**
* _calloc - Function that allocates memory using malloc.
* @nmemb: is the each
* @size: is the size to find
* Return: s.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m_size;

	if (size == 0 || nmemb == 0) /* error if is null */
		return (NULL);

	/* malloc - reserve memory space */

	m_size = malloc(size * nmemb);

	/* possible error */
	if (m_size == NULL)
	{
		return (NULL);
	}

	/* we go through the arrangement of malloc */
	for (i = 0; i < (size * nmemb); i++)
	{
		*(m_size + i) = 0;
	}
	return ((void *)m_size); /* ¿why? */

}
