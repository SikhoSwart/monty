#include "monty.h"
/**
 * isnumber - checks if a string is a number
 * @str: string being passed
 * Return: returns 1 if string is a number, 0 otherwise
 */
int isnumber(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * parse - parses a line
 * @line: line to be parsed
 * @stack: pointer to top of stack
 * @line_number: current line number
 * Return: opcode or NULL
 */
char *parse(char *line, stack_t **stack, unsigned int line_number)
{
	char *opcode, *ag, *push;
	(void)stack;

	push = "push";
	opcode = strtok(line, "\n ");
	if (opcode == NULL)
	{
		return (NULL);
	}
	if (strcmp(opcode, push) == 0)
	{
		ag = strtok(NULL, "\n ");
		if (isnumber(ag) == 1 && ag != NULL)
		{
			var_global.p_arg = atoi(ag);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	return (opcode);
}
