/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:35:46 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 00:36:19 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	index;

	if (n == 0)
		return (0);
	index = 0;
	while (s1[index] && s1[index] == s2[index] && index < n)
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
