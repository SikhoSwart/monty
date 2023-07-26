#include "monty.h"
/**
 * _push - Implement the push opcode
 * @stack: pointer
 * @line_number: current line number
 * Return: nothing
 */
void _push(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *t;
	(void)line_number;

	t = malloc(sizeof(stack_t));
	if (!t)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	t->n = var_global.p_arg;
	t->next = *stack;
	t->prev = NULL;
	if (*stack != NULL)
	{
		(*stack)->prev = t;
	}
	*stack = t;
}
