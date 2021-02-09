/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:47:05 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 00:11:59 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	char	*ptr_dest;
	char	*ptr_src;
	int				index;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	index = 0;
	while (index < n)
	{
		ptr_dest[index] = ptr_src[index];
		if (ptr_src[index] == (char)c)
			return (&ptr_dest[index+1]);
		index++;
	}
	return (NULL);
}
