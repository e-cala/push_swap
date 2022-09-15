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
void	printLinkedlist(t_stack *head);
void	min_value(t_stack **head, int indexi, int tmp);
/*	input_check.c		*/
int		is_duplicate(t_stack *head);
int		ft_atoi(const char *s, int *value);
int		check_input(int argc, char **argv, t_stack **head);

/*	utils.c			*/
void	err_message(void);
int		is_digit(char c);

#endif
