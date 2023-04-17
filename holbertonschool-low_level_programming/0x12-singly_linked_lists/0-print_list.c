#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head of the struct.
 * Return: number of elements in a linked list_t list.
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	return (1 + print_list(h->next));

}
