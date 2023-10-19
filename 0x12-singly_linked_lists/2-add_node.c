#include "lists.h"

/**
 *add_node - add node to the beginning of a line
 *@str: param
 *Return: head
 */
int lenghth(const char *str);
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;

	if (head == NULL)
	{
		return (NULL);
	}
	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new_nd->next = NULL;
	}
	else
		new_nd->next = *head;
	{
		new_nd->str = strdup(str);
		new_nd->len = lenghth(str);
		*head = new_nd;
	}
	return (*head);
}
/**
 *lenghth - get the length
 *@str: param
 *Return: length
 */
int lenghth(const char *str)
{
	int j = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[j]  != '\0')
	{
		j++;
	}
	return (j);
}
