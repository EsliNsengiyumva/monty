#include "monty.h"
/**
 * sf_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_counter
 * Return: no return
*/
void sf_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ht = *head;
	if (ht->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = ht->next->n / ht->n;
	ht->next->n = aux;
	*head = ht->next;
	free(ht);
}
