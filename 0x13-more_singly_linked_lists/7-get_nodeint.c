#include "lists.h"
/**
 *get_nodeint_at_index - get the specified given position in singly linked list
 *@head: the head of the singly linked list
 *@index: index of given position in a singly linked list
 *Return: null if index is out of range or head if within range
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int keepCount = 0;

	while (keepCount < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		keepCount++;
	}
	return (head);
}
