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
	dlistint_t *tmp, *tmp2, *newNode;

	tmp = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 1)
	{
		if (tmp == NULL)
			return NULL;
		tmp->next = newNode;
		newNode->prev = tmp;
		return (tmp);
	}
	while (idx != 1)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	tmp2 = tmp->next;

	tmp->next = newNode;
	tmp2->prev = newNode;
	newNode->prev = tmp;
	newNode->next = tmp2;

	return (*h);
}
