#include "lists.h"
/**
 *new_node - create newNode
 *@n: param to passed
 *Return: sum of all the nth list
 */
listint_t *new_node(int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
/**
 *insert_nodeint_at_index - insert new node at a given position
 *@head: the head of the singly linked lis
 *@n: value to be paassed to the newnode
 *@idx: indext which newnode with value received from @n will be inserted
 *Return: sum of all the nth list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *tmp, *tmp_next;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	newNode = new_node(n);
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	if (idx == 0)
		*head = newNode;
	while ((i < idx - 1) && (tmp != NULL) && (idx != 0))
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		newNode->next = tmp;
	else
	{
		tmp_next = tmp->next;
		tmp->next = newNode;
		newNode->next = tmp_next;
	}
	return (newNode);
}
