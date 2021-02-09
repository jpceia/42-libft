/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:42:45 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 20:56:08 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, int len)
{
	int	index;
	int k;

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