#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of the struct.
 * Return: number of elements in a linked list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elements;

	if (h == NULL)
		return (0);
	num_elements = (1 + listint_len(h->next));
	return (num_elements); /* Return numbers of elements */
}
