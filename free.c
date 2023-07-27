#include "monty.h"
/**
 * _free - frees list
 * @h: head
 * Return: nada
 */
void _free(stack_t *h)
{
	stack_t *temp;

	while (h != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
