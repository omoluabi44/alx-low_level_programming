#include "lists.h"
/**
 *pop_listint - delete head node and return data
 *@head: head pointr
 *Return: data of nodes
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if ((head == NULL) || (*head == NULL))
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
