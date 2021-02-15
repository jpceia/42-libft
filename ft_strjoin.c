/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 03:42:08 by jceia             #+#    #+#             */
/*   Updated: 2021/02/15 20:30:24 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*internal_strcat(char *dest, const char *src)
{
	int	n;
	int	index;

	n = ft_strlen(dest);
	index = 0;
	while (src[index])
	{
		dest[n + index] = src[index];
		index++;
	}
	dest[n + index] = 0;
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*res;

	size = ft_strlen(s1);
	size += ft_strlen(s2);
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	internal_strcat(res, s1);
	internal_strcat(res, s2);
	return (res);
}
