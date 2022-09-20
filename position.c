#include "push_swap.h"

void	get_position(t_stack **head)
{
	t_stack	*tmp;
	int	i;

	tmp = *head;
	i = 1;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;	
	}
}
