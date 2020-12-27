#include "ft_list.h"
#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*l_next;

	if (!lst)
		return ;
	l = *lst;
	while(l)
	{
		l_next = l->next;
		del(l->content);
		free(l);
		l = l_next;
	}
}
