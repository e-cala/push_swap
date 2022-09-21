/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:01 by ecabanas          #+#    #+#             */
/*   Updated: 2022/09/20 15:08:09 by ecabanas         ###   ########.fr       */
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
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (!check_input(argc, argv, &stack_a))
	{
		err_message();
		return (0);
	}
	printf("1.Stack A: ");
	print_linkedlist(stack_a);

	sorting_algorithm(&stack_a, &stack_b);
	printf("\n2.Stack A:\n");
	print_linkedlist(stack_a);
	printf("2.Stack B:\n");
	print_linkedlist(stack_b);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (!check_input(argc, argv, &stack_a))
	{
		err_message();
		return (0);
	}
	printf("1.Stack A: ");
	print_linkedlist(stack_a);
	get_target(5, stack_a);
	get_target(3, stack_a);
	get_target(2, stack_a);
	get_target(1, stack_a);
	return (0);
}*/
