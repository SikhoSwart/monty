#include "monty.h"
/**
 * _read - read a bytecode file
 * @filename: file pathname
 * @stack: pointer to top stack
 * Return: Nothing
 */
void _read(char *filename, stack_t **stack)
{
	size_t i;
	char *ln;
	int chk, read;
	int count;
	instruct_func s;

	count = 1;
	i = 0;
	var_global.file = fopen(filename, "r");
	if (var_global.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&var_global.buffer, &i, var_global.file)) != -1)
	{
		ln = parse(var_global.buffer, stack, count);
		if (ln == NULL || ln[0] == '#')
		{
			count++;
			continue;
		}
		s = _opcode(ln);
		if (s == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", count, ln);
			exit(EXIT_FAILURE);
		}
		s(stack, count);
		count++;
	}
	free(var_global.buffer);
	chk = fclose(var_global.file);
	if (chk == -1)
	{
		exit(-1);
	}
}
