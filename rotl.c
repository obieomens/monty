#include "monty.h"
/**
 * f_rotl- rotates the stack to the top
 * @head: pointer to stack head
 * @line_num: line number
 * Return: rotation
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int line_num)
{
	stack_t *tmp = *head, *x;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	x = (*head)->next;
	x->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = x;
}
