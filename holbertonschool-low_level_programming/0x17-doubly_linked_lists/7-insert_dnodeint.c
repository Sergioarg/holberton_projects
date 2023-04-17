#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the linkend list
 * @idx: index to search an position
 * @n: number of index
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);
	if (idx > 0 && *h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Assing the value to new node created */

	new_node->next = NULL; /* Assing NULl to declarate the of DLL*/
	new_node->prev = NULL; /* Assing NULl to declarate the of DLL*/

	if (*h == NULL) /* Validate if the second pointer is NUll  */
	{
		(*h) = new_node;
		return (new_node); /* return the node end to assig pocsition  */
	}
	current_node = *h; /* Assing value of header */

	for (idx = idx; idx > 1; idx--) /* scroll to the appropriate index */
		current_node = current_node->next;

	/* Add the next value to ->next of new node */
	new_node->next = current_node->next;
	/* Add to value of new node to current node */
	current_node->next = new_node;
	/* Assig prev node of current node */
	new_node->prev = current_node;

	return (new_node);
}
