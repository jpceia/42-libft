/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_rotate_right.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:29:25 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 20:32:43 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Converts a tree with the format
 *        y                    x
 *       / \                  / \
 *      x   C     into       A   y
 *     / \                      / \
 *    A   B                    B   C
 * 
 * The operations we need to perform are:
 *  - x right child is y (instead of B)
 *  - y left child is B (instead of x)
 *  - change B parent to y (instead of x)
 *  - swap x and y parents
 */
t_rbtree	*rbtree_rotate_right(t_rbtree *y)
{
	t_rbtree	*x;
	t_rbtree	*b;
	t_rbtree	*parent;

	x = y->left;
	b = x->right;
	x->right = y;
	y->left = b;
	if (b)
		b->parent = y;
	parent = y->parent;
	y->parent = x;
	x->parent = parent;
	return (x);
}
