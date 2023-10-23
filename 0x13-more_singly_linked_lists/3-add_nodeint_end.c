#include "lists.h"
/**
 *add_nodeint_end - add new node to the end
 *@head: head pointer
 *@n:param
 *Return: newly creates node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;

	if (head == NULL)
	{
		return (0);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = *head;
			tmp = tmp->next;
		}
		tmp->next = newNode;
		newNode->n = n;
	}
	return (*head);
}
