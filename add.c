#include "monty.h"

#define STACK_SIZE 100

/**
* push - adds elements
* @value: the stack no
*/


void push(int value)
{
if (top >= STACK_SIZE - 1)
{
printf("Stack Overflow\n");
exit(EXIT_FAILURE);
}
stack[++top] = value;
}

/**
* pop - remove and return elem
* Return: stack
*/

int pop(void)
{
if (top < 0)
{
printf("Stack Underflow\n");
exit(EXIT_FAILURE);
}
return (stack[top--]);
}

/**
* el_add - performs additions
* @head: the top or head
* @counter: the last in
*/

void el_add(stack_t **head, unsigned int counter)
{
if (top < 1)
{
printf("Error: can't add, stack too short\n");
exit(EXIT_FAILURE);
}

int a = pop();
int b = pop();
push(a + b);
}

/**
* main - the execution func
* Return: resukts if exec
*/

int main(void)
{
push(5);
push(10);
el_add();

printf("Result: %d\n", stack[top]);

return (EXIT_SUCCESS);
}
