#include "monty.h"
global_var var_global;
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	stack_t *stk;

	stk = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	_read(argv[1], &stk);
	_free(stk);
	return (0);
}
