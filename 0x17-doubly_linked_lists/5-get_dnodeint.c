#include "lists.h"
/**
 *get_dnodeint_at_index - return nth node of doubly linked list
 *@head: pointer to the head
 *@index: nth element
 *Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *tmp;

	n = 0;
	tmp = head;

	while (n < index)
	{

		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		n++;
	}
	return (tmp);
}
