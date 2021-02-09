/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:37:00 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 21:33:52 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c)
	{
		while (*str)
		{
			if (c == *str)
				return (&((char *)str)[0]);
			str++;
		}
		return (0);
	}
	while (*str)
		str++;
	return (&((char *)str)[0]);
}
