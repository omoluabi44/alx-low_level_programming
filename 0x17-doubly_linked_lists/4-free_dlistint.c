#include "lists.h"
/**
 *free_dlistint - free node in doubly linked list
 *@head: pointer to the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *tmp2;

	tmp = head;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
}
