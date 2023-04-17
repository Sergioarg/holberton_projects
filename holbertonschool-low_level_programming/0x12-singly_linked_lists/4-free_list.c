#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the struct.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	/* free one by one node */
	free_list(head->next);
	/* free one by one string */
	free(head->str);
	/* free the list */
	free(head);
}
