#include "monty.h"
/**
 * sf_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_counter
 * Return: no return
*/
void sf_pchar(stack_t **head, unsigned int counter)
{
	stack_t *ht;

	ht = *head;
	if (!ht)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (ht->n > 127 || ht->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ht->n);
}
