#include "monty.h"
/**
 * _pop - removes the top element of the stack
 * @stack: pointer to top
 * @line_number: current line number
 * Return: nothing
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *t;

	t = *stack;
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = t->next;
	if (*stack)
	{
		(*stack)->prev = NULL;
	}
	free(t);
}
