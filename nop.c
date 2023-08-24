#include "monty.h"


/**
* main - call functions
* nop - no operation code doing nothing
* @head: pointer pointing top of stack
* @counter: rep num of line of opcode
* Return: always 0
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
