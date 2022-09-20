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
	int		i;

	tmp = *head_b;
	(void)head_a;
	i = 0;
	while (tmp)
	{
		i = find_pos(tmp->index, head_a);
		printf("-----%i", i);
		tmp->target_pos = i;
		tmp = tmp->next;
	}
}

int	find_pos(int index, t_stack **head_a)
{
	t_stack	*tmp;
	int		i;

	tmp = *head_a;
	i = 0;
	while (tmp && index+1 != tmp->index)
	{
		i++;
		tmp = tmp->next;
	}
	/*while (tmp && index+1 != tmp->index)
	{
		i++;
		tmp = tmp->next;
	}*/
	return (i);
}
