/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:32:36 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 23:22:44 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		index;
	char	c;

	c = (char)ch;
	index = 0;
	while (str[index])
		index++;
	while (index >= 0)
	{
		if (str[index] == c)
			return (&((char *)str)[index]);
		index--;
	}
	return (0);
}