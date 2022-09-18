#include "push_swap.h"

/*reverse_rotate:
 * Makes circular linked list and shifts all
 * elements *DOWN* the stack. Finally updates
 * the head and last element pointer to NULL.
 * rotate	--> (i <  size)
 * rev. rotate 	--> (i <= size)
 */
void	reverse_rotate(t_stack **head)
{
	t_stack	*tmp;
	int	i;
	int	size;

	tmp = *head;
	i = 0;
	size = nodes_in_stack(*head);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (*head);
	tmp = *head;
	while (i <= size)
	{
		i++;
		tmp = tmp->next;
	}
	*head = tmp->next;
	tmp->next = NULL;
}
/*rra:
 * Rotates *DOWN* stack A
 * prints the move.
 */
void	rra(t_stack **head)
{
	reverse_rotate(head);
	printf("rra\n");
}

/*rrb:
 * Rotates *DOWN* stack B
 * prints the move
 */
void	rrb(t_stack **head)
{
	reverse_rotate(head);
	printf("rrb\n");
}
