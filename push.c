#include "monty.h"

/**
* push - adds an element to the stack
* @stack: pointer to the stack
* @line_num: line number in the file
*/
void push(stack_t **stack, unsigned int line_num)
{
	int n, j = 0, is_neg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				is_neg = 1; }
		if (is_neg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*stack);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(stack, n);
	else
		addqueue(stack, n);
}
