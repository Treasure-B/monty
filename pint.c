#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: Double pointer to the stack
 * @line_num: Line number in the file
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
