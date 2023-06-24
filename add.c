#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void sf_add(stack_t **head, unsigned int counter)
{
	stack_t *ht;
	int len = 0, aux;
	ht = *head;
	while (ht)
	{
		ht = ht->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ht = *head;
	aux = ht->n + ht->next->n;
	ht->next->n = aux;
	*head = ht->next;
	free(ht);
}
