#include "lists.h"
/**
 * print_dlistint - print element in doubly linked list
 *@h:  pointer pointing to head
 *Return: return total elemtent
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *ptr;

	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr->prev != NULL)
		ptr = ptr->prev;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
