/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:47:30 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 23:25:29 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (ptr - (unsigned char *)str < n)
		*(ptr++) = (unsigned char)c;
	return (str);
}
