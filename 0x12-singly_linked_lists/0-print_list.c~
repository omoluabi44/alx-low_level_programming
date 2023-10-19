#include "lists.h"
/**
 * print_list - print the element of single link list
 *@h: head
 *Return: length
 */

size_t print_list(const list_t *h)
{
        int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h->next != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
