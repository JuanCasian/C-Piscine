/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 10:08:12 by jcasian           #+#    #+#             */
/*   Updated: 2018/06/01 10:41:16 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree *current;

	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	current = *root;
	if (cmpf(item, current->item) < 0)
	{
		if (current->left)
			btree_insert_data(&current->left, item, cmpf);
		else
			current->left = btree_create_node(item);
	}
	else
	{
		if (current->right)
			btree_insert_data(&current->right, item, cmpf);
		else
			current->right = btree_create_node(item);
	}
}
