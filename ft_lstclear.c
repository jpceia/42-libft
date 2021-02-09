/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:45:47 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 00:26:54 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*l_next;

	if (!lst || !*lst)
		return ;
	l = *lst;
	while (l)
	{
		l_next = l->next;
		if (l->content)
			del(l->content);
		free(l);
		l = l_next;
	}
}
