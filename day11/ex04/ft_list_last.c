/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:47:25 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 15:50:44 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*res;

	res = begin_list;
	if (begin_list)
	{
		while ((*res).next != NULL)
			res = (*res).next;
	}
	else
	{
		res = NULL;
	}
	return (res);
}
