#include "monty.h"
/**
 * _pint -  prints the value at the top of the stack
 * @stack: pointer
 * @line_number: current line number
 * Return: nothing
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *r;

	r = *stack;
	if (!r)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", r->n);
}
