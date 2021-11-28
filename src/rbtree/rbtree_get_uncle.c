/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_get_uncle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:10:42 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:14:40 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_rbtree	*rbtree_get_uncle(t_rbtree *node)
{
	t_rbtree	*grandparent;

	if (!node->parent || !node->parent->parent)
		return (NULL);
	grandparent = node->parent->parent;
	if (node->parent == grandparent->left)
		return (grandparent->right);
	return (grandparent->left);
}
