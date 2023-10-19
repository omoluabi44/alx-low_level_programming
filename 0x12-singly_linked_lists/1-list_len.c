#include "lists.h"
/**
 *list_len - print the number element of single link list
 *@h: head
 *Return: length
 */
size_t list_len(const list_t *h)
{
	int  i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
