#include "push_swap.h"

void	get_position(t_stack **head)
{
	t_stack	*tmp;
	int	i;

	tmp = *head;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;	
	}
}

void	get_target_pos(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;
	int	target_pos;

	tmp = *head_b;
	get_position(head_a);
	get_position(head_b);
	target_pos = 0;
	while (tmp)
	{
		target_pos = get_target(tmp->index, *head_a);
		tmp->target_pos = target_pos;
		tmp = tmp->next;
	}
}

/*	NO ESTOY 100% SEGURO QUE DE EL RESULTADO CORRECTO	*
*****************************************************************/
int	get_target(int index, t_stack *head_a)
{
	t_stack	*new;
	int	tmp = INT_MAX;
	int	i;

	new = head_a;
	i = 0;
	while (new)
	{
		if (new->index - index < tmp)
		{
			tmp = abs(new->index - index);
		}
		new = new->next;
	}
	new = head_a;
	while (new)
	{
		if (abs(new->index - index) == tmp)
			break;
		i++;
		new = new->next;
	}
	return (i);
}
