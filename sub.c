#include "monty.h"
/**
  *sf_sub- sustration
  *@head: stack head
  *@counter: line_counter
  *Return: no return
 */
void sf_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int subs, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	subs = temp->next->n - temp->n;
	temp->next->n = subs;
	*head = temp->next;
	free(temp);
}
