/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:37:00 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 23:07:31 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int ch)
{
	char	c;

	c = (char)ch;
	if (c)
	{
		while (*str)
		{
			if (c == *str)
				return (str);
			str++;
		}
		return (0);
	}
	while (*str)
		str++;
	return (&str[0]);
}
