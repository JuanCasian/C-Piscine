/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 13:24:16 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 15:33:02 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	if (begin_list)
	{
		if ((*begin_list) == NULL)
			(*begin_list) = ft_create_elem(data);
		else
		{
			current = (*begin_list);
			while ((*current).next != NULL)
				current = (*current).next;
			(*current).next = ft_create_elem(data);
		}
	}
}
