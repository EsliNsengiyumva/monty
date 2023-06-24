#include "monty.h"
/**
 * sf_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void sf_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ht = *head;
	temp = ht->next->n * ht->n;
	ht->next->n = temp;
	*head = ht->next;
	free(ht);
}
