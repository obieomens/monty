#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack
 * @head: pointer to stack head
 * @line_num: line number
 * Return: product
 */
void f_mul(stack_t **head, unsigned int line_num)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	x = hd->next->n * hd->n;
	hd->next->n = x;
	*head = hd->next;
	free(hd);
}

