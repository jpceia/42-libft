/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:47:24 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/08 21:51:03 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*ptr_dest;
	char	*ptr_src;
	int		index;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	index = 0;
	while (index < n)
	{
		ptr_dest[index] = ptr_src[index];
		index++;
	}
	return (dest);
}
