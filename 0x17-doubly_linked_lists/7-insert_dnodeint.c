#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a node at a given index
 *@h:head pointer
 *@idx: index
 *@n: data to be include
 *Return: new Node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp,  *newNode;

	tmp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	/**newNode->n = n;
	tmp2 = tmp->next;
	tmp->next = newNode;
	tmp2->prev = newNode;
	newNode->prev = tmp;
	newNode->next = tmp2;*/
	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;
	return (newNode);
}
