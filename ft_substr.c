/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 18:28:39 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 21:48:56 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*res;

	res = malloc(len + 1);
	if (!res)
		return (NULL);
	index = 0;
	while (s[start + index] && index < len)
	{
		res[index] = s[start + index];
		index++;
	}
	res[index] = '\0';
	return (res);
}