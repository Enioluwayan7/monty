#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *au;
	int sus, nodes;

	au = *head;
	for (nodes = 0; au != NULL; nodes++)
		au = au->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	au = *head;
	sus = au->next->n - au->n;
	au->next->n = sus;
	*head = au->next;
	free(au);
}
