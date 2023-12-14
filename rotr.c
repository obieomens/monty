#include "monty.h"
/**
 * f_rotr- rotates the stack to the bottom
 * @head: pointer to stack head
 * @line_num: line number
 * Return: rotation
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int line_num)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
