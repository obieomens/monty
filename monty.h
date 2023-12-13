#ifndef MAIN_H
#define MAIN_H


#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct buf_s- includes variables, files, arguments and line content
 * @arg: argument value
 * @file: pointer to monty file
 * @line_con: line content
 * @flag: change stack queue
 *
 * Description: it carries values through the program
 */
typedef struct buf_s
{
	char *arg;
	FILE *file;
	char *line_con;
	int flag;
} buf_t;
extern buf_t buf;

void free_stack(stack_t *head);
void _push(stack_t **head, unsigned int line_num);
void _pall(stack_t **head, unsigned int line_num);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);

#endif
