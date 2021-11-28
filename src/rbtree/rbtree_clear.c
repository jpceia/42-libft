/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:07:07 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/28 23:24:54 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rbtree_clear(t_rbtree *root, void (*del)(void *))
{
	if (!root)
		return ;
	rbtree_clear(root->left, del);
	rbtree_clear(root->right, del);
	if (del)
		del(root->item);
	free(root);
}
