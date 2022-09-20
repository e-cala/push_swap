/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:41 by ecabanas          #+#    #+#             */
/*   Updated: 2022/09/15 12:10:45 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

/*	stack_functions.c	*/
void	ft_push(t_stack **head, int value);
void	print_linkedlist(t_stack *head);
int	nodes_in_stack(t_stack *head);
void	min_value(t_stack **head, int index, int tmp);
int	max_index(t_stack **head);

/*	sorting_functions.c	*/
int	sorting_algorithm(t_stack **head_a, t_stack **head_b);
int	stack_is_sorted(t_stack *head);
void	sort_three(t_stack **head);
void	sort_big(t_stack **head_a, t_stack **head_b);

/*	input_check.c		*/
int	is_duplicate(t_stack *head);
int	ft_atoi(const char *s, int *value);
int	check_input(int argc, char **argv, t_stack **head);

/*	utils.c			*/
void	err_message(void);
int	is_digit(char c);

/*	push.c			*/
void	push(t_stack **src, t_stack **dst);
void	pa(t_stack **src, t_stack **dst);
void	pb(t_stack **src, t_stack **dst);

/*	swap.c			*/
void	swap(t_stack **head);
void	sa(t_stack **head);
void	sb(t_stack **head);

/*	rotate.c		*/
void	rotate(t_stack **head);
void	ra(t_stack **head);
void	rb(t_stack **head);

/*	reverse_rotate.c	*/
void	reverse_rotate(t_stack **head);
void	rra(t_stack **head);
void	rrb(t_stack **head);

#endif
