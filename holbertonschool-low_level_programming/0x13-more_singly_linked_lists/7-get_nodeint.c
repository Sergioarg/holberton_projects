#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the struct.
 * @index: index of the node, starting at 0.
 * Return: head node’s data (n).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head; /* Start Point  */
	while (count < index)
	{
		if (node)
		{
			node = node->next;
			count++;
		}
		else
		{
			return (NULL);
		}
	}
	return (node);
}
