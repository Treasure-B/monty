#include "monty.h"
/**
 * pall - Prints all the values on the stack
 * @head: Pointer to the stack
 * @line_number: Line number in the file
 */

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;
	h = *head;

	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
