#include "monty.h"
/**
 * _add - adds the top two elements of the stack
 * @stack: pointer
 * @line_number: current line number
 * Return: nothing
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int sum = 0, i = 0;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (stack == NULL || (*stack)->next == NULL || i <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->next->n + (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = sum;
}
