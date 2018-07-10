/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:59:47 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 15:04:21 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (begin_list)
	{
		if ((*begin_list) == NULL)
			(*begin_list) = ft_create_elem(data);
		else
		{
			tmp = ft_create_elem(data);
			(*tmp).next = (*begin_list);
			*begin_list = tmp;
		}
	}
}
