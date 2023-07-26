#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: pointer
 * @line_number: current line number
 * Return: nothing
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *stk;
	int temp;

	stk = *stack;
	if (stk == NULL || stk->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = stk->n;
	stk->n = stk->next->n;
	stk->next->n = temp;
}
