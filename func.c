#include "monty.h"
#include "errors.c"


/**
* f_swap - Swaps the top two elements
* @head: pointer pointing to top
* @counter: Int rep the line num
*/
void f_swap(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n;
h->n = h->next->n;
h->next->n = aux;
}



/**
* f_add - Adds the top two elements
* @head: pointer pointing to top
* @counter: Int rep the line num
*/
void f_add(stack_t **head, unsigned int counter)
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


/**
* f_sub - Adds the top two elements
* @head: pointer pointing to top
* @counter: Int rep the line num
*/
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *aux;
int sus, nodes;

aux = *head;
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = *head;
sus = aux->next->n - aux->n;
aux->next->n = sus;
*head = aux->next;
free(aux);
}


/**
* f_div - Adds the top two elements
* @head: pointer pointing to top
* @counter: Int rep the line num
*/
void f_div(stack_t **head, unsigned int counter)
{
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
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n / h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
