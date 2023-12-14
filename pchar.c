#include "monty.h"
/**
 * f_pchar - prints the character at the top of stack
 * @head: stack head
 * @line_num: line_number
 * Return: no return
 */
void f_pchar(stack_t **head, unsigned int line_num)
{
	stack_t *hd;

	hd = *head;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
