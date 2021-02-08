#include "libft.h"
#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list* lst;

	if (!(lst = malloc(sizeof(*lst))))
		return (NULL);
	lst->next = NULL;
	lst->content = content;
	return (lst);
}
