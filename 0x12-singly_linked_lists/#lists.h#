#ifndef _LIST
#define _LIST
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#include <stdlib.h>

#include <string.h>

#include "lists.h"


/**

 * add_node_end - adds a new node at the end of a linked list

 * @head: double pointer to the list_t list

 * @str: string to put in the new node

 *

 * Return: address of the new element, or NULL if it failed

 */

list_t *add_node_end(list_t **head, const char *str)

{

 list_t *new;

 list_t *temp = *head;

 unsigned int len = 0;


 while (str[len])

 len++;


 new = malloc(sizeof(list_t));

 if (!new)

 return (NULL);


 new->str = strdup(str);

 new->len = len;

 new->next = NULL;


 if (*head == NULL)

 {

 *head = new;

 return (new);

 }


 while (temp->next)

 temp = temp->next;


 temp->next = new;


 return (new);

}
list_t *add_node(list_t **head, const char *str);
#endif
