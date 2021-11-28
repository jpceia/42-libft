/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_apply_prefix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:37:35 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:51:36 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Applies the function given as argument to the item of each node,
 * 			using prefix traversal to search the tree.
 * 
 * @param root		the root of the tree.
 * @param applyf	the function to apply to each node.
 */
void	rbtree_apply_prefix(t_rbtree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	applyf(root->item);
	rbtree_apply_prefix(root->left, applyf);
	rbtree_apply_prefix(root->right, applyf);
}
