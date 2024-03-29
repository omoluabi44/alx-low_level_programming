#include "monty.h"
int stack_length = 0;
/**
 *push - push integer to stack
 *@stack: head to the node
 *@line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{

	if ((N_token <= 1) || !(is_number(tokens[1])))
	{
		free_tokes();
		free(all_func);
		free(head);
		free(line);
		close_stream();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_t *h;

	h = *stack;
	h = malloc(sizeof(stack_t));
	if (h == NULL)
	{
		malloc_fail();
		free_tokes();
	}

	h->n = (int) atoi(tokens[1]);

	if (h != NULL)
	{
		h->next = head;
		head->prev = h;
	}
	head = h;

	stack_length += 1;
	free_tokes();

}
/**
 *pall - push integer to stack
 *@stack: head to the node
 *@line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (head == NULL)
		return;
	(void) line_number;
	(void) stack;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->next != NULL)

			printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	free_tokes();

}
/**
 *function_ptr - call appropriate function
 */
void function_ptr(void)
{

	int i;
	instruction_t all_funcs[] = {
		{"push", &push},
		{"pall", &pall},
		{NULL, NULL}
	};
	if (N_token == 0)
		return;
	for (i = 0; all_funcs[i].opcode != NULL; i++)
	{

		if (strcmp(all_funcs[i].opcode, tokens[0]) == 0)
		{
			all_func->opcode = all_funcs[i].opcode;
			all_func->f = all_funcs[i].f;
			return;
		}
	}
	invalid_instr();

}
/**
 *run_instr - run_instruction
 */

void run_instr(void)
{
	stack_t *stack = NULL;

	if (N_token == 0)
		return;
	all_func->f(&stack, line_number);
}
/**
 *invalid_instr- print ivalid when user enter invalid command
 */
void invalid_instr(void)
{
	dprintf(2, "L%d: unknow instruction %s\n",
		line_number, tokens[0]);
	close_stream();
	free_tokes();
	free(all_func);
	free(head);
	free(line);
	exit(EXIT_FAILURE);
}
/**
 *free_tokes - free the element in the array
 */
