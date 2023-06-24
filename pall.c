#include "monty.h"
/**
 * sf_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void sf_pall(stack_t **head, unsigned int counter)
{
	stack_t *ht;
	(void)counter;

	ht = *head;
	if (ht == NULL)
		return;
	while (ht)
	{
		printf("%d\n", ht->n);
		ht = ht->next;
	}
}
