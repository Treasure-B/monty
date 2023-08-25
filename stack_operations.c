#include "monty.h"

/**
* mul_nodes - Adds top 2 elmnts of hd
* @head: Pointer to top node of head
* @counter: Int rep line number
*/
void mul_nodes(stack **head, unsigned int counter)
{
int sum;

if (head == NULL || *head == NULL || (*head)->next == NULL)
more_err(8, counter, "mul");

(*head) = (*head)->next;
sum = (*head)->n * (*head)->prev->n;
(*head)->n = sum;
free((*head)->prev);
(*head)->prev = NULL;
}

/**
* mod_nodes - Adds top 2 elmnts of hd
* @head: Pointer to top node of head
* @counter: Int rep line number
*/
void mod_nodes(stack **head, unsigned int counter)
{
int sum;

if (head == NULL || *head == NULL || (*head)->next == NULL)

more_err(8, counter, "mod");

if ((*head)->n == 0)
more_err(9, counter);
(*head) = (*head)->next;
sum = (*head)->n % (*head)->prev->n;
(*head)->n = sum;
free((*head)->prev);
(*head)->prev = NULL;
}
