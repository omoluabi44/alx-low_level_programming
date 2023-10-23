#include "lists.h"
/**
 *add_nodeint - add new node to the beginning
 *@head: head pointer
 *@n:param
 *Return: newly creates node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		newNode->next = NULL;
	}
	else
		newNode->next = *head;
	newNode->n = n;
	*head = newNode;
	return (*head);
}
