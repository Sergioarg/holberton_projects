#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of the struct.
 * @n: values of head.
 * Return:the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	/* reserve the space */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Get the len of the sttings*/

	new_node->n = n; /* pass the leng */
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
