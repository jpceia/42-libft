/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:47:05 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 21:47:06 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	int				index;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	index = 0;
	while (index < n && ptr_src[index] != (unsigned char)c)
	{
		ptr_dest[index] = ptr_src[index];
		index++;
	}
	return (dest);
}
