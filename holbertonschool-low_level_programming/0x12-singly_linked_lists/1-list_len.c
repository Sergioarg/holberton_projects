#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of the struct.
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	/* Validate if the next node is null */
	if (h == NULL)
		return (0);
	/* Return the numbers of elements of nodes. */
	return (1 + list_len(h->next));
}
