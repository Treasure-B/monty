#include "monty.h"

/**
 * addnode - Adds a new node to the head of the stack
 * @stack: Pointer to the head of the stack
 * @n: Value to be assigned to the new node
 */

void addnode(stack_t **stack, int n)
{
	stack_t *n_node, *current_head;

	current_head = *stack;
	n_node = malloc(sizeof(stack_t));

	if (n_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (current_head)
		current_head->prev = n_node;
	n_node->n = n;
	n_node->next = current_head;
	n_node->prev = NULL;
	*stack = n_node;
}
