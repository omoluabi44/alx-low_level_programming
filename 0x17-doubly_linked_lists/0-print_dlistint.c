#include "lists.h"
/**
 * print_dlistint - print element in doubly linked list
 *@h:  pointer pointing to head
 *Return: return total elemtent
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	n = 0;


	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
