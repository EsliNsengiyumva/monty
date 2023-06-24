#include "monty.h"
/**
 * sf_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void sf_mod(stack_t **head, unsigned int counter)
{
	stack_t *ht;
	int len = 0, temp;

	ht = *head;
	while (ht)
	{
		ht = ht->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	temp = ht->next->n % ht->n;
	ht->next->n = temp;
	*head = ht->next;
	free(ht);
}
