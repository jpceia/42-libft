/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:26:58 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 21:51:45 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isspace(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int	ft_atoi(const char *str)
{
	int nb;
	int sgn;

	nb = 0;
	while (isspace(*str))
		str++;
	sgn = 1;
	if (*str == '-' || *str == '+')
	{
		sgn = *str == '-' ? -1 : 1;
		str++;
	}
	while (*str)
	{
		nb = 10 * nb + sgn * (*str - '0');
		str++;
	}
	return (nb)
}
