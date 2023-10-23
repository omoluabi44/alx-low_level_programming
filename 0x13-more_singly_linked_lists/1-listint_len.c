#include "lists.h"
/**
 *listint_len - print the length of single link list
 *@h: head
 *Return: length
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
