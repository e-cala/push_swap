#include "push_swap.h"

int	sorting_algorithm(t_stack **head)
{
	if (stack_is_sorted(*head))
		return (1);
	else
	{
		if (nodes_in_stack(*head) == 2)
			sa(head);
		else if (nodes_in_stack(*head) == 3)
			sort_three(head);
		else if (nodes_in_stack(*head) > 3)
			printf("[sorting_algorithm]: Stack has > 3 nodes\n");
	}
	return (0);
}

int	stack_is_sorted(t_stack *head)
{
	while (head->next)
	{
		if(head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	sort_three(t_stack **head)
{
	if (nodes_in_stack(*head) == (*head)->index)
		ra(head);
	else if(nodes_in_stack(*head) == (*head)->next->index)
		rra(head);
	if ((*head)->index > (*head)->next->index)
		 sa(head);
}
