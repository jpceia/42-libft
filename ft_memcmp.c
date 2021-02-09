/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:47:20 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 00:40:45 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, int n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				index;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	index = 0;
	while (ptr1[index] == ptr2[index] && index < n - 1)
		index++;
	return (ptr1[index] - ptr2[index]);
}