#include "monty.h"
/**
* execute - executes the opcode
* @stack:  linked list
* @line_num: line_counter
* @file: poiner to monty file
* @line_con: line content
* Return: nothing
*/
int execute(char *line_con, stack_t **stack, unsigned int line_num, FILE *file)
{
	unsigned int x = 0;
	char *op;
	instruction_t opst[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
		{"pop", f_pop},
		{"swap", f_swap},
		{"add", f_add},
		{"nop", f_nop},
		{"sub", f_sub},
		{"div", f_div},
		{"mul", f_mul},
		{"mod", f_mod},
		{"pchar", f_pchar},
		{"pstr", f_pstr},
		{"rotl", f_rotl},
		{"rotr", f_rotr},
		{"queue", f_queue},
		{"stack", f_stack},
		{NULL, NULL}
	};
	op = strtok(line_con, " \n\t");
	if (op && op[0] == '#')
	{
		return (0);
	}
	buf.arg = strtok(NULL, " \n\t");
	while (opst[x].opcode && op)
	{
		if (strcmp(op, opst[x].opcode) == 0)
		{
			opst[x].f(stack, line_num);
			return (0);
		}
		x++;
	}
	if (op && opst[x].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, op);
		fclose(file);
		free(line_con);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

