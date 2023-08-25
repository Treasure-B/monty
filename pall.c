#include "monty.h"
/**
 * el_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void el_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
