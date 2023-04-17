#include "lists.h"

/**
 * free_listint - frees a list_t list.
 * @head: head of the struct.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	/* free one by one node */
	free_listint(head->next);
	/* free the list */
	free(head);
}
