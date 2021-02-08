/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:47:11 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 21:50:33 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)str;
	while (ptr - (unsigned char *)str < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (0);
}
