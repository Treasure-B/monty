#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @stack: Double pointer to the stack
 * @line_num: Line number in the file
 */

void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;
	free(tmp);
}
