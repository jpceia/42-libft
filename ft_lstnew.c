#include "libft.h"
#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list* l;

	l = malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l->next = NULL;
	l->content = content;
	return (l);
}
