#include "lists.h"
/**
 * dlistint_len - get the length of doubly linked list
 *@h:pointer to the list
 *Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t n;

	n = 0;

	if (h == NULL)
		return (n);

	if (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
