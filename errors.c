#include "monty.h"

/**
* err - Prints error message by case
* @error_code: case with codes are:
* case 1 file not given
* case 2 can't open or read file given
* case 3 file contains invalid cmd
* case 4 unable to malloc more memory
* case 5 When cmd "push" is not an int
*
*/

void err(int error_code, ...)
{
va_list ag;
char *op;
int l_num;

va_start(ag, error_code);
switch (error_code)
{
case 1:
printf("USAGE: monty file\n");
break;
case 2:
printf("Error: Can't open file %s\n",
va_arg(ag, char *));
break;
case 3:
l_num = va_arg(ag, int);
op = va_arg(ag, char *);
printf("L%d: unknown instruction %s\n", l_num, op);
break;
case 4:
printf("Error: malloc failed\n");
break;
case 5:
printf("L%d: usage: push integer\n", va_arg(ag, int));
break;
default:
break;
}
free_nodes();
exit(EXIT_FAILURE);
}

/**
* more_err - more errors
* @error_code: case with codes are
* case 6 When stack is empty for pint
* case 7 When stack is empty for pop.
* case 8 When stack is short for op
* case 9 Division by zero.
*/
void more_err(int error_code, ...)
{
va_list ag;
char *op;
int l_num;

va_start(ag, error_code);
switch (error_code)
{
case 6:
printf("L%d: can't pint, stack empty\n",
va_arg(ag, int));
break;
case 7:
printf("L%d: can't pop an empty stack\n",
va_arg(ag, int));
break;
case 8:
l_num = va_arg(ag, unsigned int);
op = va_arg(ag, char *);
printf("L%d: can't %s, stack too short\n", l_num, op);
break;
case 9:
printf("L%d: division by zero\n",
va_arg(ag, unsigned int));
break;
default:
break;
}
free_nodes();
exit(EXIT_FAILURE);
}

/**
* string_err - more and more errors
* @error_code: case with codes are
* case 10 int in a node is
* outside ASCII bounds.
* case 11 The stack is empty.
*/
void string_err(int error_code, ...)
{
va_list ag;
int l_num;

va_start(ag, error_code);
l_num = va_arg(ag, int);
switch (error_code)
{
case 10:
printf("L%d: can't pchar, value out of range\n", l_num);
break;
case 11:
printf("L%d: can't pchar, stack empty\n", l_num);
break;
default:
break;
}
free_nodes();
exit(EXIT_FAILURE);
}
