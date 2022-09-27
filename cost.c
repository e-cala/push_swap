#include "push_swap.h"

void	get_cost(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp_a;
	t_stack *tmp_b;
	int	size_a;
	int	size_b;

	tmp_a = *head_a;
	tmp_b = *head_b;
	size_a = nodes_in_stack(*head_a);
	size_b = nodes_in_stack(*head_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		if (tmp_b->pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
		tmp_b->cost_a = tmp_a->target_pos;
		if (tmp_b->target_pos > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * -1;
		tmp_b = tmp_b->next;	
	}
}

void	do_cheapest_move(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp_b;
	int	cheapest;
	int	cost_a;
	int	cost_b;

	tmp_b = *head_b;
	cheapest = INT_MAX;
	while (tmp_b)
	{
		if (abs(tmp_b->cost_a) + abs(tmp_b->cost_b) < abs(cheapest))
		{
			cheapest = abs(tmp_b->cost_a) + abs(tmp_b->cost_b);
			cost_a = tmp_b->cost_a;
			cost_b = tmp_b->cost_b;
		}
		tmp_b = tmp_b->next;
	}
}
