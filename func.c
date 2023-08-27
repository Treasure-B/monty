#include "monty.h"


/**
* f_nop - Does nothing.
* @stack: pointer pointing to top
* @line_number: Int rep the line num
*/
void f_nop(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
}


/**
* f_swap - Swaps the top two elements
* @stack: pointer pointing to top
* @line_number: Int rep the line num
*/
void f_swap(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_err(8, line_number, "swap");
tmp = (*stack)->next;
(*stack)->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = *stack;
tmp->next = *stack;
(*stack)->prev = tmp;
tmp->prev = NULL;
*stack = tmp;
}

/**
* f_add - Adds the top two elements
* @stack: pointer pointing to top
* @line_number: Int rep the line num
*/
void f_add(stack_t **stack, unsigned int line_number)
{
int sum;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_err(8, line_number, "add");

(*stack) = (*stack)->next;
sum = (*stack)->n + (*stack)->prev->n;
(*stack)->n = sum;
free((*stack)->prev);
(*stack)->prev = NULL;
}


/**
* f_sub - Adds the top two elements
* @stack: pointer pointing to top
* @line_number: Int rep the line num
*/
void f_sub(stack_t **stack, unsigned int line_number)
{
int sum;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

more_err(8, line_number, "sub");


(*stack) = (*stack)->next;
sum = (*stack)->n - (*stack)->prev->n;
(*stack)->n = sum;
free((*stack)->prev);
(*stack)->prev = NULL;
}


/**
* f_div - Adds the top two elements
* @stack: pointer pointing to top
* @line_number: Int rep the line num
*/
void f_div(stack_t **stack, unsigned int line_number)
{
int sum;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_err(8, line_number, "div");

if ((*stack)->n == 0)
more_err(9, line_number);
(*stack) = (*stack)->next;
sum = (*stack)->n / (*stack)->prev->n;
(*stack)->n = sum;
free((*stack)->prev);
(*stack)->prev = NULL;
}

