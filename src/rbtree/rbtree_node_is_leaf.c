/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_node_is_leaf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:50:18 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 19:50:43 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rbtree_node_is_leaf(t_rbtree *node)
{
	return (node->left == NULL && node->right == NULL);
}
