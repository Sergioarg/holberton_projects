#include "lists.h"

/**
 * free_listint2 - frees a list_t list.
 * @head: head of the struct.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	temp = *head;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
