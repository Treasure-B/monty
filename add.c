#include "monty.h"

/**
* el_add - adds top 2 elements of stack
* main - creates empty stack head
* @head: stack head
* @counter: line_number
* Return: always 0
*/

void el_add(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;
h = *head;


while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);
}


int main(void)
{
stack_t *head = NULL;

el_add(&head, 1);

return (0);
}
