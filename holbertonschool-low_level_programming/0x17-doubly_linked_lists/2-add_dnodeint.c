#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: head of the list
* @n: number of new data
* Return: Always 0
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Create var struct */

	if (head == NULL) /* Validate if the firts pointer is null */
		return (0);
	/* Asignate space  in memory whit malloc */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL) /* Validate if new node is null */
		return (0);

	new_node->n = n; /* Asignate new value to DLL */

	if (*head == NULL) /* Validate if the second pointer is null */
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head; /* Jump pointer to pointer */
	(*head)->prev = new_node; /* The second node validate  */
	*head = new_node; /* The firts pointer take the new node */

	return (new_node);
}
