#include "monty.h"
/**
 * _pall - prints all the values on the stack
 * @stack: pointer
 * @line_number: current line number
 * Return: nothing
 */
void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *r;

	r = *stack;
	while (r != NULL)
	{
		printf("%d\n", r->n);
		r = r->next;
	}
}
