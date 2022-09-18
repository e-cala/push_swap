/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:54 by ecabanas          #+#    #+#             */
/*   Updated: 2022/09/15 12:09:05 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push(t_stack **head, int value)
{
	t_stack	*new;

	new = malloc (sizeof * new);
	if (!new)
		return ;
	new->value = value;
	if (!head)
		new->next = NULL;
	else
	{
		new->next = *head;
	}
	*head = new;
}

void	print_linkedlist(t_stack *head)
{
	while (head != NULL)
	{
		printf("%i ", head->value);
		head = head->next;
	}
	//**********HABRÁ QUE QUITAR!!*******
	printf("\n");
}

int	nodes_in_stack(t_stack *head)
{
	int	i;

	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void	min_value(t_stack **head, int index, int tmp)
{
	t_stack	*new;

	new = *head;
	while (new)
	{
		if (tmp > new->value && new->index == 0)
			tmp = new->value;
		new = new->next;
	}
	new = *head;
	while (new)
	{
		if (tmp == new->value)
			new->index = index;
		new = new->next;
	}
}	
