#include "lists.h"
/**
 *add_dnodeint_end - add node at the end
 *@head: pointer that point to the head pointer
 *@n: tha data to be added
 *Return: the new address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newNode;


	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
		newNode->prev = tmp;
	}
	return (*head);
}
