#include "lists.h"
/**
 *sum_dlistint - sum all the data in doubly linked list
 *@head: head pointer
 *Return: the total sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int n;

	n = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp->next != NULL)
	{
		n += tmp->n;
		tmp = tmp->next;
	}
	n += tmp->n;

	return (n);
}
