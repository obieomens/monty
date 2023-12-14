#include "monty.h"
/**
 * f_pint- prints top of stack
 * @head: pointer to head
 * @line_num: line number
 * Return: top of stack
 */
void f_pint(stack_t **head, unsigned int line_num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
