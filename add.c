#include "monty.h"
/**
 * f_add - adds the top two elements of the stack
 * @head: stack head
 * @line_num: line number
 * Return: sum of elements
 */
void f_add(stack_t **head, unsigned int line_num)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		fclose(buf.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	x = hd->n + hd->next->n;
	hd->next->n = x;
	*head = hd->next;
	free(hd);
}
