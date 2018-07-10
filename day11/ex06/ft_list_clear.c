/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:10:54 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/30 13:56:43 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if ((*begin_list)->next != 0)
	{
		ft_list_clear(&(*begin_list)->next);
	}
	free(*begin_list);
	*begin_list = NULL;
}
