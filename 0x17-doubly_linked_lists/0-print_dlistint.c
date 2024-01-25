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

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
