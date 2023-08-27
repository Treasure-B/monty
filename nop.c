#include "monty.h"
/**
*f_nop- nothing
*@head: stack head
*@counter: line_number
*Return: no return
*/
void f_nop(stack_t **head, unsigned int counter)
{
(void) counter;
(void) head;
}

int main(void)
{
printf("[INFO] Starting program.");


printf("Executing nop opcode...\n");
f_nop();
printf("nop opcode executed successfully.\n");

printf("[INFO] Program finished.");
return (0);
}
