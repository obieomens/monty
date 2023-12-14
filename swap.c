#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack
 * @head: double pointer to stack head
 * @line_num: line_number
 * Return: swapped elements
 */
void f_swap(stack_t **head, unsigned int line_num)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	x = hd->n;
	hd->n = hd->next->n;
	hd->next->n = x;
}


