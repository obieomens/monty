#include "monty.h"
/**
 * _push- function that pushes an element to the stack
 * @head: pointer to head stack
 * @line_num: line number
 * Return: pushed element
 */
void _push(stack_t **head, unsigned int line_num)
{
	int x, y = 0, signal = 0;

	if (buf.arg)
	{
		if (buf.arg[0] == '-')
		{
			y++;
		}
		for (; buf.arg[y] > 57 || buf.arg[y] < 48)
		{
			signal = 1;
		}
		if (signal == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(buf.file);
			free(buf.line_con);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(buf.file);
		free(buf.line_con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = atoi(buf.arg);
	if (buf.flag == 0)
	{
		addnode(head, x);
	}
	else
	{
		addqueue(head, x);
	}
}
/**
 * _pall- prints the stack
 * @head: pointer to head stack
 * @line_num: line number but not used in this instance
 * Return: printed stack
 */
void _pall(stack_t **head, unsigned int line_num)
{
	stack_t *hd;
	(void)line_num;

	hd = *head;
	if (hd == NULL)
	{
		return;
	}
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
