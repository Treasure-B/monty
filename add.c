#include "monty.h"

#define STACK_SIZE 100
/**
* push - adds elements
* @value: the stack no
* pop - remove and return elem
* el_add - performs additions
* @head: the top
* @counter: last
* main - execution
* Return: always NULL or exit
*/

int stack[STACK_SIZE];
int top = -1;

void push(int value)
{
if (top >= STACK_SIZE - 1)
{
printf("Stack Overflow\n");
exit(EXIT_FAILURE);
}
stack[++top] = value;
}

int pop(void)
{
if (top < 0) {
printf("Stack Underflow\n");
exit(EXIT_FAILURE);
}
return stack[top--];
}

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

int main(void)
{
push(5);
push(10);
el_add();

printf("Result: %d\n", stack[top]);

return (EXIT_SUCCESS);
}
