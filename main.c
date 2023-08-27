#include "monty.h"
stack_t *head = NULL;

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
