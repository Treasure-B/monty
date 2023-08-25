#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", el_push}, {"pall", el_pall}, {"pint", el_pint},
				{"pop", el_pop},
				{"swap", el_swap},
				{"add", el_add},
				{"nop", el_nop},
				{"sub", el_sub},
				{"div", el_div},
				{"mul", el_mul},
				{"mod", el_mod},
				{"pchar", el_pchar},
				{"pstr", el_pstr},
				{"rotl", el_rotl},
				{"rotr", el_rotr},
				{"queue", el_queue},
				{"stack", el_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
