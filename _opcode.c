#include "monty.h"
/**
 * _opcode - gets opcode, returns correct func
 * @str: opcode
 * Return: correct function, or NULL
 */
instruct_func _opcode(char *str)
{
	int i;

	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL},
	};
	i = 0;
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0)
		i++;
	return (instruct[i].f);
}
