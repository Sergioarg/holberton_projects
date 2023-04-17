#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: head of the struct.
 * Return: number of elements in a linked list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_elements;

	if (h == NULL)
		return (0);

	if (h != NULL)
		printf("%d\n", h->n);

	num_elements = (1 + print_listint(h->next));
	return (num_elements);
}
