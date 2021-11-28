/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_apply_infix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:38:19 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:53:01 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Applies the function given as argument to the item of each node,
 * 			using infix traversal to search the tree.
 * 
 * @param root		the root of the tree.
 * @param applyf	the function to apply to each node.
 */
void	rbtree_apply_infix(t_rbtree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	rbtree_apply_infix(root->left, applyf);
	applyf(root->item);
	rbtree_apply_infix(root->right, applyf);
}
