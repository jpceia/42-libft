/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:45:47 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 15:06:51 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*holder;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		holder = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = holder;
	}
}