#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t.
 * @head: head of the struct.
 * Return: head node’s data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int num_values = 0;

	temp = head;
	while (temp)
	{
		num_values += temp->n;
		temp = temp->next;
	}
	return (num_values);
}
