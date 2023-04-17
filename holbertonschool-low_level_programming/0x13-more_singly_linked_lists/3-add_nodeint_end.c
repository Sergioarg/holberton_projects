#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of the struct.
 * @n: values of head.
 * Return:the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (0);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	/* Get the len of the sttings*/

	new_node->n = n;  /* pass the str */
	new_node->next = NULL;

	if (*head != NULL)
	{	temp = (*head);

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		return (temp->next);
	}
	*head = new_node;
	return (*head);
}
