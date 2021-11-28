/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_height.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:57:21 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:08:04 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rbtree_height(t_rbtree *root)
{
	int	left_height;
	int	right_height;

	if (root == NULL)
		return (0);
	left_height = rbtree_height(root->left);
	right_height = rbtree_height(root->right);
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
