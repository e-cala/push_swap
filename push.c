#include "push_swap.h"

/*Push:
 * Pushes the first element from stack src into stack dst.
 */
void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	tmp = *src;
	if (!*dst)
	{
		*src = (*src)->next;
		*dst = tmp;
		(*dst)->next = NULL;
	}
	else
	{
		*src = (*src)->next;
		tmp->next = *dst;
		*dst = tmp;
	}
}
/*pa:
 * Pushes the first element from stack A into stack B
 * and prints 'pa'.
 */
void	pa(t_stack **src, t_stack **dst)
{
	push(src, dst);
	printf("pa\n");
}

/*pb:
 * Pushes the first element from stack B into stack A
 * andp rints 'pb'.
 */
void	pb(t_stack **src, t_stack **dst)
{
	push(src, dst);
	printf("pb\n");
}
