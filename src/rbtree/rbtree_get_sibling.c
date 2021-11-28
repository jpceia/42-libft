/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_get_sibling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:10:58 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:15:14 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_rbtree	*rbtree_get_sibling(t_rbtree *node)
{
	t_rbtree	*parent;

	if (!node->parent)
		return (NULL);
	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
