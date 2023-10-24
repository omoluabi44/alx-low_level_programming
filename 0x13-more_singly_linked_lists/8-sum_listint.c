#include "lists.h"
/**
 *sum_listint - add total sum of nth list
 *@head: the head of the singly linked list
 *Return: sum of all the nth list
 */
int sum_listint(listint_t *head)
{
	int keepSum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		keepSum += head->n;
		head = head->next;
	}
	return (keepSum);
}
