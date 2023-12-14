#include "monty.h"
/**
 * f_queue - prints the top
 * @head: pointer
 * @line_num: line_number
 * Return: printed top
 */
void f_queue(stack_t **head, unsigned int line_num)
{
	(void)head;
	(void)line_num;
	buf.flag = 1;
}
/**
 * addqueue - add node to the tail
 * @n: new value
 * @head: pointer to head of  stack
 * Return: node at tail
 */
void addqueue(stack_t **head, int n)
{
	stack_t *node2, *x;

	x = *head;
	node2 = malloc(sizeof(stack_t));
	if (node2 == NULL)
	{
		printf("Error\n");
	}
	node2->n = n;
	node2->next = NULL;
	if (x)
	{
		while (x->next)
		{
			x = x->next;
		}
	}
	if (!x)
	{
		*head = node2;
		node2->prev = NULL;
	}
	else
	{
		x->next = node2;
		node2->prev = x;
	}
}

