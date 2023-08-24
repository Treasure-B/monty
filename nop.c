#include "monty.h"


/**
* nop - no operation code doing nothing
* @stack: pointer pointing top of stack
* @line_num: int rep line of opcode
* Return: always 0
*/

void nop(stack_t **stack, unsigned int line_num)
{
(void)stack;
(void)line_num;
}

int main(void)
{

nop(NULL, 0);

return (0);
}
