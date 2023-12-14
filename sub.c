#include "monty.h"
/**
 * f_sub- subtracts the top element of the stack from
 * the second top element of the stack
 * @head: pointer to stack head
 * @line_num: line number
 * Return: subtraction result
 */
void f_sub(stack_t **head, unsigned int line_num)
{
	stack_t *x;
	int i, nodes;

	x = *head;
	for (nodes = 0; x != NULL; nodes++)
	{
		x = x->next;
	}
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	i = x->next->n - x->n;
	x->next->n = i;
	*head = x->next;
	free(x);
}
