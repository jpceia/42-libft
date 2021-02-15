/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:42:45 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/15 21:07:30 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	k;

	if (!haystack)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	index = 0;
	while (haystack[index] && index < len)
	{
		k = 0;
		while (needle[k] && index + k < len &&
				haystack[index + k] == needle[k])
			k++;
		if (!needle[k])
			return ((char*)(haystack + index));
		index++;
	}
	return (NULL);
}
