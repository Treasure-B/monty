#include "monty.h"

/**
* el_swap - add top 2 elements of stack
* @head: stack head
* @counter: line_number
* Return: no return or NULL
*/

void el_swap(stack_t **head, unsigned int counter)
{
stack_t *tmp;

if(head == NULL || *head == NULL || (*head)->next == NULL)
more_err(8, counter, "swap");
tmp = (*head)->next;
(*head)->next = tmp->next;
if(tmp->next != NULL)
tmp->next->prev = *head;
tmp->next = *head;
(*head)->prev = tmp;
tmp->prev = NULL;
*head = tmp;
}
