/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_apply_suffix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:37:05 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:51:14 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Applies the function given as argument to the item of each node,
 *			using suffix traversal to search the tree.
 * 
 * @param	root	the root of the tree.
 * @param	applyf	the function to apply to each node.
 */
void	rbtree_apply_suffix(t_rbtree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	rbtree_apply_suffix(root->left, applyf);
	rbtree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
