/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:28:02 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 13:09:51 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

int					main(int argc, char **argv)
{
	t_stock_par *result;

	if (argc > 0)
	{
		result = ft_param_to_tab(argc, argv);
	}
	return (0);
}
