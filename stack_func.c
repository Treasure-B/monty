#include "monty.h"

/**
* nop - no operation or does nothing.
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/
void nop(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
}


/**
* swap_nodes - Swap top 2 elmnts of hd
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/

void swap_nodes(stack_t **head, unsigned int counter)
{
stack_t *tmp;

if (head == NULL || *head == NULL || (*head)->next == NULL)
more_err(8, counter, "swap");
tmp = (*head)->next;
(*head)->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = *head;
tmp->next = *head;
(*head)->prev = tmp;
tmp->prev = NULL;
*head = tmp;
}

/**
* add_nodes - Add top 2 elmnts of head
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/
void add_nodes(stack_t **head, unsigned int counter)
{
int sum;

if (head == NULL || *head == NULL || (*head)->next == NULL)
more_err(8, counter, "add");

(*head) = (*head)->next;
sum = (*head)->n + (*head)->prev->n;
(*head)->n = sum;
free((*head)->prev);
(*head)->prev = NULL;
}


/**
* sub_nodes - deduct tp 2 elmnts of hd
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/
void sub_nodes(stack_t **head, unsigned int counter)
{
int sum;

if (head == NULL || *head == NULL || (*head)->next == NULL)

more_err(8, counter, "sub");


(*head) = (*head)->next;
sum = (*head)->n - (*head)->prev->n;
(*head)->n = sum;
free((*head)->prev);
(*head)->prev = NULL;
}


/**
* div_nodes - div top 2 elmnts of head
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/
void div_nodes(stack_t **head, unsigned int counter)
{
int sum;

if (head == NULL || *head == NULL || (*head)->next == NULL)
more_err(8, counter, "div");

if ((*head)->n == 0)
more_err(9, counter);
(*head) = (*head)->next;
sum = (*head)->n / (*head)->prev->n;
(*head)->n = sum;
free((*head)->prev);
(*head)->prev = NULL;
}

