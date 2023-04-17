#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: header of the double linked list
* Return: count of elements of list
**/

size_t dlistint_len(const dlistint_t *h)
{

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + dlistint_len((h->next)));
	}
}
