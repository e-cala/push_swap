#include "push_swap.h"


void	ft_push(t_stack **head, int value, int index)
{
	t_stack	*new;

	new = malloc (sizeof * new);
	if (!new)
		return ;
	new->value = value;
	new->index = index;
	if (!head)
		new->next = NULL;
	else
	{
		new->next = *head;
	}
	*head = new;
}

void	printLinkedlist(t_stack *head)
{
	while (head != NULL)
	{
		printf("%d ", head->value);
		head = head->next;
	}
	//***QUIZAS HAY QUE QUITAR ESTE PRINTF***
	printf("\n");
}
