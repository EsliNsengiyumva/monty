#include "monty.h"
/**
 * sf_pop - prints the top
 * @head: stack head
 * @counter: line_counter
 * Return: no return
*/
void sf_pop(stack_t **head, unsigned int counter)
{
	stack_t *ht;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ht = *head;
	*head = ht->next;
	free(ht);
}
