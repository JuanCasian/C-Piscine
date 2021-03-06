/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 22:27:18 by jcasian           #+#    #+#             */
/*   Updated: 2018/06/01 00:21:08 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H

# define FT_BTREE_H

# include <stdlib.h>

typedef struct			s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}						t_btree;

t_btree					*btree_create_node(void *item);

#endif
