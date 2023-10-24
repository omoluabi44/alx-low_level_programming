#include "lists.h"
/**
 *delete_nodeint_at_index - insert new node at a given position
 *@head: the head of the singly linked lis
 *@index: indext which newnode with value received from @n will be inserted
 *Return: sum of all the nth list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *Node, *tmp;

	tmp = *head;
	if ((head == NULL) || (head == NULL))
		return (-1);
	while ((i < index - 1) && (tmp != NULL) && (index != 0))
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		Node = tmp->next;
		free(tmp);
		*head = Node;
	}
	else
	{
		if (tmp->next == NULL)
			Node = tmp->next;
		else
			Node = tmp->next->next;
		free(tmp->next);
		tmp->next = Node;
	}
	return (1);
}
