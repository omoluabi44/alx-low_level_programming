#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
