#include "monty.h"
/**
 * f_pop- removes top element of stack
 * @head: pointer to head
 * @line_num: line number
 * Return: stack after element removal
 */
void f_pop(stack_t **head, unsigned int line_num)
{
	stack_t *hd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	*head = hd->next;
	free(hd);
}
