/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:26:58 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 23:10:37 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int nb;
	int sgn;

	nb = 0;
	while ((*str == ' ') || (*str == '\t'))
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
	return (nb);
}