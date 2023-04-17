#include "lists.h"
/**
 * free_dlistint - frees the allocations mades.
 * @head: head declarate of the DLL.
**/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	/* free node node by one  */
	free_dlistint(head->next);
	/* free DLL */
	free(head);
}
