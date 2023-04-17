#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data (n) of a dlistint_t LL.
* @head: head of DLL
* Return: Always 0
*/

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	/* Take every value of any node and call recursion whit the next node */
	return (head->n + sum_dlistint(head->next));
}
