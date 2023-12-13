#include "monty.h"
/**
 * addnode - add node to the stack
 * @head: pointer to head of the stack
 * @n: new value
 * Return: added node
*/
void addnode(stack_t **head, int n)
{
	stack_t *node2, *x;

	x = *head;
	node2 = malloc(sizeof(stack_t));
	if (node2 == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (x)
	{
		x->prev = node2;
	}
	node2->n = n;
	node2->next = *head;
	node2->prev = NULL;
	*head = node2;
}
