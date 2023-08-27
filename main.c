#include "monty.h"
stack_t *head = NULL;

/**
* main - access Point
* @argc: argmunemt count
* @argv: argument vector
* Return: Always Zero.
*/
int main(int argc, char **argv)
{
if (argc < 2 || argc > 2)
err(1);
open_file(argv[1]);
free_nodes();
return (0);
}


/**
* free_nodes - freeing stack of nodes.
*/

void free_nodes(void)
{
stack_t *tmp;

if (head == NULL)
return;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
