/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:38:58 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/30 15:35:23 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *next;
	t_list *current;

	current = *begin_list;
	prev = *begin_list;
	while (current)
	{
		next = current->next;
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
			{
				*begin_list = next;
			}
			prev->next = next;
			free(current);
			current = prev;
		}
		prev = current;
		current = next;
	}
}
