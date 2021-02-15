/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:59:52 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/15 18:05:44 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ' '	space
** \t	horizontal tab
** \n	newline
** \v	vertical tab
** \f	feed
** \r	carriage return
*/

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}
