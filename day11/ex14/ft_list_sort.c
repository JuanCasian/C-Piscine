/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:43:50 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/30 17:56:35 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*counter;
	t_list	*current;
	void	*tmp;

	counter = *begin_list;
	while (counter)
	{
		current = *begin_list;
		while (current->next)
		{
			if ((*cmp)(current->data, current->next->data) > 0)
			{
				tmp = current->data;
				current->data = current->next->data;
				current->next->data = tmp;
			}
			current = current->next;
		}
		counter = counter->next;
	}
}
