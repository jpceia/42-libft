#include "libft.h"
#include "ft_list.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	(*lst)->next = new;
}
