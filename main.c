/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:01 by ecabanas          #+#    #+#             */
/*   Updated: 2022/09/15 12:10:35 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/*main:
 * Checks if the input is correct, in wihch case it initializes stacks a and b,
 * assigns each value indexes and sorts the stacks. When sorting is done, frees
 * the stacks and exits.
 */
int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	//t_stack *stk_b;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (!check_input(argc, argv, &stack_a))
	{
		err_message();
		return (0);
	}
	printLinkedlist(stack_a);
	return (0);
}
