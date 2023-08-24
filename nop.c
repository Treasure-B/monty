#include "monty.h"


/**
* nop - no operation code doing nothing
* main - call function
* @head: pointer pointing top of stack
* @counter: rep num of line of opcode
*/

void nop(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
}

int main(void)
{
nop(NULL, 0);
return (0);
}
