/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:09:24 by jpceia            #+#    #+#             */
/*   Updated: 2021/03/23 19:02:46 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;
	size_t	index;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	index = 0;
	if (src > dest)
	{
		while (index < n)
		{
			ptr_dest[index] = ptr_src[index];
			index++;
		}
	}
	else
	{
		while (index < n)
		{
			ptr_dest[n - index - 1] = ptr_src[n - index - 1];
			index++;
		}
	}
	return (dest);
}
