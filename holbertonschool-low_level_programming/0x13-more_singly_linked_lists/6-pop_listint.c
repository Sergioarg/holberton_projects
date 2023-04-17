#include "lists.h"

/**
 * pop_listint - frees a list_t list.
 * @head: head of the struct.
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num_values = 0;

	if (head)
		temp = *head; /* Assigned the temporary reference */

	if (temp)
	{
		/* Save value so you do not miss. */
		/*  Save the reference delen head to pass the reference */
		num_values = (*head)->n;
		*head = (*head)->next; /* Referenced the new reference */
		free(temp); /* Free the head. */
	}
	return (num_values);
}
