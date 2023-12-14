#include "monty.h"
/**
 * f_div - divides the top two elements of the stack
 * @head: pointer to head
 * @line_num: line_number
 * Return: the result of division
 */
void f_div(stack_t **head, unsigned int line_num)
{
	stack_t *hd;
	int l = 0, x;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = hd->next->n / hd->n;
	hd->next->n = x;
	*head = hd->next;
	free(hd);
}

