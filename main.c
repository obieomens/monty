#include "monty.h"
buf_t buf = {NULL, NULL, NULL, 0};
/**
 * main- monty code interpreter
 * @ac: argument counter
 * @av: argument vector
 * Return: 0 always success
 */
int main(int ac, char *av[])
{
	char *line_con;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int line_num = 0;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	buf.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		line_con = NULL;
		read_line = getline(&line_con, &size, file);
		buf.line_con = line_con;
		line_num++;
		if (read_line > 0)
		{
			execute(line_con, &stack, line_num, file);
		}
		free(line_con);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
