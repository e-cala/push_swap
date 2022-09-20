#include "push_swap.h"

/*sorting_algorithm:
 * Checks if the algorithm is sorted, contains 2 nodes
 * contains 3 nodes and does small algorithm or more than
 * 3 nodes and does big algorithm. Returns (1) if stack
 * is sorted or (0) if stack not sorted.
 */
int	sorting_algorithm(t_stack **head_a, t_stack **head_b)
{
	(void)head_b;
	if (stack_is_sorted(*head_a))
		return (1);
	else
	{
		if (nodes_in_stack(*head_a) == 2)
			sa(head_a);
		else if (nodes_in_stack(*head_a) == 3)
			sort_three(head_a);
		else if (nodes_in_stack(*head_a) > 3)
			sort_big(head_a, head_b);
	}		
	return (0);
}
/*stack_is_sorted:
 * Runs through each node and compares that the 
 * index is always bigger than the previous.
 * Returns (1) if true and (0) if false
 */
int	stack_is_sorted(t_stack *head)
{
	while (head->next)
	{
		if(head->index > head->next->index)
			return (0);
		head = head->next;
	}
	return (1);
}

/*sort_three:
 * Checks if first index is the biggest and does 'ra' or
 * if the second is the biggest and does 'rra'. After this
 * checks if first index is bigger than second index and does
 * 'sa'.
 */
void	sort_three(t_stack **head)
{
	if (max_index(head) == 1)
		ra(head);
	else if (max_index(head) == 2)
		rra(head);
	if ((*head)->index > (*head)->next->index)
		 sa(head);
}
/*
void	sort_big(t_stack **head_a, t_stack **head_b)
{
	int	i;
	int	size_a;

	i = 0;
	size_a = nodes_in_stack(*head_a);
	while (i++ < size_a - 3)
		pb(head_a, head_b);
	sort_three(head_a);
}
*/
void	sort_big(t_stack **head_a, t_stack **head_b)
{
	int	i;
	int	size_a;
	t_stack	*tmp;

	i = 0;
	size_a = nodes_in_stack(*head_a);
	tmp = *head_a;
	while (i++ < size_a - 3)
	{
		if (tmp->index < (size_a / 2))
			pb(tmp, head_b);
		tmp = tmp->next;
	}
	sort_three(head_a);
}

