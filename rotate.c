#include "push_swap.h"

/*rotate:
 * Makes circular linked list and shifts all
 * elements *UP* the stack. Finally updates the
 * head and last element pointer to NULL.
 * rotate	--> (i <  size)
 * rev. rotate	--> (i <= size)
 */
void	rotate(t_stack **head)
{
	t_stack	*tmp;
	int	i;
	int	size;

	tmp = *head;
	i = 0;
	size = nodes_in_stack(*head);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *head;
	tmp = *head;
	while (i < size)
	{
		i++;
		tmp = tmp->next;
	}
	*head = tmp->next;
	tmp->next = NULL;
}

/*ra:
 * Rotates *UP* stack A
 * prints the move
 */
void	ra(t_stack **head)
{
	rotate(head);
	printf("ra\n");
}

/*rb:
 * Rotates *UP* stack B
 * prints the move.
 */
void	rb(t_stack **head)
{
	rotate(head);
	printf("rb\n");
}
