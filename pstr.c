#include "monty.h"
/**
 * sf_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_counter
 * Return: no return
*/
void sf_pstr(stack_t **head, unsigned int counter)
{
	stack_t *ht;
	(void)counter;

	ht = *head;
	while (ht)
	{
		if (ht->n > 127 || ht->n <= 0)
		{
			break;
		}
		printf("%c", ht->n);
		ht = ht->next;
	}
	printf("\n");
}
