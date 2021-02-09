/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:07:57 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 16:41:18 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int size)
{
	int	index;

	index = 0;
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	if (index < size)
		dest[index] = '\0';
	return (ft_strlen(src));
}