#include "monty.h"

/**
* pop_top - Adds a node to the head
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/

void pop_top(stack_t  **head, unsigned int counter)
{
stack_t  *tmp;

if (head == NULL || *head == NULL)
more_err(7, counter);

tmp = *head;
*head = tmp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(tmp);
}

/**
* print_top - top node of the head
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/

void print_top(stack_t  **head, unsigned int counter)
{
if (head == NULL || *head == NULL)
more_err(6, counter);
printf("%d\n", (*head)->n);
}

/**
* add_to_head - Add a node to head
* @new_node: Pointer to new node.
* @ln: Int rep line num of opcode
*/

void add_to_head(stack_t  **new_node, __attribute__((unused))unsigned int ln)
{
stack_t  *tmp;

if (new_node == NULL || *new_node == NULL)
exit(EXIT_FAILURE);
if (head == NULL)
{
head = *new_node;
return;
}
tmp = head;
head = *new_node;
head->next = tmp;
tmp->prev = head;
}

/**
* print_head - Adds a node to the head
* @head: Pointer to top node of head
* @counter: Int rep line num of opcode
*/

void print_head(stack_t  **head, unsigned int counter)
{
stack_t  *tmp;

(void) counter;
if (head == NULL)
exit(EXIT_FAILURE);
tmp = *head;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
}

/**
* add_to_queue - Adds a node to queue
* @new_node: Pointer to new node.
* @ln: Int rep line num of opcode
*/

void add_to_queue(stack_t  **new_node, __attribute__((unused))unsigned int ln)
{
stack_t  *tmp;

if (new_node == NULL || *new_node == NULL)
exit(EXIT_FAILURE);
if (head == NULL)
{
head = *new_node;
return;
}
tmp = head;
while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = *new_node;
(*new_node)->prev = tmp;
}
