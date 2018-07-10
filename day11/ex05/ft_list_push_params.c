/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:52:27 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 20:20:54 by jcasian          ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*mylist;
	int		i;

	mylist = ft_create_elem((void*)av[0]);
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&mylist, (void*)av[i]);
		i++;
	}
	return (mylist);
}
