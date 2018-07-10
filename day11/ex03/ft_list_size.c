/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:35:28 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 15:45:15 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*current;

	current = begin_list;
	if (begin_list)
	{
		counter = 1;
		while ((*current).next != NULL)
		{
			current = (*current).next;
			counter++;
		}
		return (counter);
	}
	return (0);
}
