/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_black_height.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:55:49 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:02:50 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * By definition, every path from a given node to any of its descendant NIL
 * nodes goes through the same number of black nodes.
 * Hence, we can take an arbitrary path from the root to a node, and count the
 * number of black nodes it passes through.
 * We choose the path following the left child.
 */
int	rbtree_black_height(t_rbtree *node)
{
	int	height;

	height = 0;
	while (node)
	{
		if (node->color == RBT_BLACK)
			height++;
		node = node->left;
	}
	return (height);
}
