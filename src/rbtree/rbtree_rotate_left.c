/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_rotate_left.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:29:20 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:32:57 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Converts a tree with the format
 *        x                    y
 *       / \                  / \
 *      A   y     into       x   C
 *         / \              / \
 *        B   C            A   B
 * 
 * The operations we need to perform are:
 *  - x right child is B (instead of y)
 *  - y left child is x (instead of A)
 *  - change B parent to x (instead of y)
 *  - swap x and y parents
 */
t_rbtree	*rbtree_rotate_left(t_rbtree *x)
{
	t_rbtree	*y;
	t_rbtree	*b;
	t_rbtree	*parent;

	y = x->right;
	b = y->left;
	y->left = x;
	x->right = b;
	if (b)
		b->parent = x;
	parent = x->parent;
	x->parent = y;
	y->parent = parent;
	return (y);
}
