/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:21:52 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 16:05:44 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, int size)
{
	int	n;
	int m;
	int	index;

	n = ft_strlen(dest);
	m = ft_strlen(src);
	index = 0;
	while (src[index] && n + index < size - 1)
	{
		dest[n + index] = src[index];
		index++;
	}
	dest[n + index] = 0;
	if (n < size)
		return (n + m);
	return (size + m);
}