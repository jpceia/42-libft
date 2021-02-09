/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:42:45 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 21:44:29 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	index;
	size_t	k;

	index = 0;
	while (big[index] && index < len) {
		k = 0;
		while (little[k] && index + k < len && big[index + k] != little[k])
			k++;
		if (!little[k])
			return ((char*)(big + index));
		index++;
	}
	return (NULL);
}