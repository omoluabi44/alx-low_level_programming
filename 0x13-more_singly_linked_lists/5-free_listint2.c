#include "lists.h"
/**
 *free_listint2 - free each node in element
 *@head: head pointr
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if ((head == NULL) || (*head == NULL))
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
