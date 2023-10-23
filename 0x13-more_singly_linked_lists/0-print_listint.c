#include "lists.h"
/**
 * print_listint - print the element of single link list
 *@h: head
 *Return: length
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
