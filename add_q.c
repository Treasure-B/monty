#include "monty.h"

/**
 * addqueue - Adds a new node to the end of the stack
 * @stack: Pointer to the head of the stack
 * @n: Value to be assigned to the new node
 */

void addqueue(stack_t **stack, int n)
{
	stack_t *new_node, *tmp;

	tmp = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}
