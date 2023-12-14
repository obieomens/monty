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
void f_push(stack_t **head, unsigned int line_num);
void f_pall(stack_t **head, unsigned int line_num);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int line_num);
int main(int ac, char *av[]);
void f_div(stack_t **head, unsigned int line_num);
void f_pchar(stack_t **head, unsigned int line_num);
void f_swap(stack_t **head, unsigned int line_num);
void f_stack(stack_t **head, unsigned int line_num);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int line_num);
void f_pstr(stack_t **head, unsigned int line_num);
void f_pchar(stack_t **head, unsigned int line_num);
void f_mod(stack_t **head, unsigned int line_num);
void f_mul(stack_t **head, unsigned int line_num);
void f_div(stack_t **head, unsigned int line_num);
void f_sub(stack_t **head, unsigned int line_num);
void f_nop(stack_t **head, unsigned int line_num);
void f_add(stack_t **head, unsigned int line_num);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *line_con);
ssize_t getstdin(char **lineptr, int file);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
void f_pint(stack_t **head, unsigned int line_num);
int execute(char *line_con, stack_t **stack, unsigned int line_num, FILE *file);
void f_pop(stack_t **head, unsigned int line_num);
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int line_num);
#endif
