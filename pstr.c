#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack
 * @head: pointer to stack head
 * @line_num: line number
 * Return: printed string
 */
void f_pstr(stack_t **head, unsigned int line_num)
{
	stack_t *hd;
	(void)line_num;

	hd = *head;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
