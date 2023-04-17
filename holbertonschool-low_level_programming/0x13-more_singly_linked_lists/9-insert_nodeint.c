#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the struct.
 * @idx: is the index of the list
 * @n: number of values
 * Return: head node’s data (n).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *temp2;
	unsigned int num_values;

	temp = *head;
	temp2 = malloc(sizeof(listint_t));
	if (temp2 == NULL)
		return (NULL);

	while (idx && num_values < idx - 1)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
		num_values++;
	}
	if (!idx && !*head)
	{
		num_values->next = NULL;
	}
	if (!idx)
	{
		num_values;
	}

}
