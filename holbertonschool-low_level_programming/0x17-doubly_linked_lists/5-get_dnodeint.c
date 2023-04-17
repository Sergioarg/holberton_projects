#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: head of DLL
* @index: index to get
* Return: the nth node
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (0);

	if (index == 0) /* Validate if index is null */
		return (head);
	/* Itare in reverse whit each node */
	return (get_dnodeint_at_index(head->next, index - 1));
}
