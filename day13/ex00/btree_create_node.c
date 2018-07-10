/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 22:31:58 by jcasian           #+#    #+#             */
/*   Updated: 2018/06/01 00:22:05 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"'

t_btree	*btree_create_node(void *item)
{
	t_btree *elem;

	if (!(elem = malloc(sizeof(t_btree))))
		return (NULL);
	elem->left = NULL;
	elem->right = NULL;
	elem->item = item;
	return (elem);
}
