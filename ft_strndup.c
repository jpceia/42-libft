/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:34:14 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 21:35:27 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *str, int n)
{
	char	*res;
	int		size;

	size = 0;
	while (str[size] && size < n)
		size++;
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	res[size] = 0;
	while (size--)
		res[size] = str[size];
	return (res);
}
