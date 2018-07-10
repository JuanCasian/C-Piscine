/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:58:11 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/30 16:07:16 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *current;

	current = *begin_list1;
	if (current == 0)
	{
		*begin_list1 = begin_list2;
	}
	else
	{
		while (current->next != 0)
			current = current->next;
		current->next = begin_list2;
	}
}
