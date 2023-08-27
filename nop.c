#include "monty.h"
/**
*el_nop- no operation or nothing
*@head: stack head
*@counter: line_number
*Return: no return
*/

void el_nop(stack_t **head, unsigned int counter)
{
(void) counter;
(void) head;
}

int main(void)
{
printf("Calling nop opcode...\n");
el_nop();
printf("nop opcode exe success!\n");

return (0);
}
