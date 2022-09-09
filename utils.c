#include "push_swap.h"

void	err_message()
{
	write(2, "Error\n", 6);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
