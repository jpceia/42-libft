/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_apply_by_level.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:45:40 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:47:11 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

typedef struct s_node_info
{
	int	level;
	int	depth;
	int	is_first;
}	t_node_info;

static void	rbtree_apply_to_level(
	t_rbtree *node, t_node_info *info,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	depth;

	if (node == NULL || info->depth > info->level)
		return ;
	if (info->level == info->depth)
	{
		applyf(node->item, info->level, info->is_first);
		info->is_first = 0;
		return ;
	}
	depth = ++info->depth;
	rbtree_apply_to_level(node->left, info, applyf);
	info->depth = depth;
	rbtree_apply_to_level(node->right, info, applyf);
}

/**
 * @brief	Applies the function passed as argument to each node of the tree.
 *			The tree is browsed level by level.
 * 
 * @param	root	the root of the tree.
 * @param	applyf	the function to apply to each node.
 */
void	rbtree_apply_by_level(t_rbtree *root,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_node_info	info;

	info.is_first = 0;
	info.level = 0;
	while (info.is_first == 0)
	{
		info.is_first = 1;
		info.depth = 0;
		rbtree_apply_to_level(root, &info, applyf);
		info.level++;
	}
}
