#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at given index
 *@head: pointer to the head;
 *@index:given index to be deleted
 *Return: 1 if succeed or 0 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/**unsigned int n;*/
	dlistint_t *tmp = *head;

	/**n = 0;*/

	if (tmp == NULL)
		return -1;
        if(tmp->next == NULL)
	{
		free(tmp);
		return (1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
	       
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	return (-1);
}
