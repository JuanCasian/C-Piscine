/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:24:54 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 22:37:59 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_get_str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(len + 1);
	len = 0;
	while (src[len])
	{
		str[len] = src[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*arr_struct;
	int			arrsc;

	arrsc = 0;
	arr_struct = (struct s_stock_par*)malloc(sizeof(t_stock_par) * ac + 1);
	while (arrsc < ac)
	{
		arr_struct[arrsc].size_param = ft_get_str_len(av[arrsc]);
		arr_struct[arrsc].str = av[arrsc];
		arr_struct[arrsc].copy = ft_strdup(av[arrsc]);
		arr_struct[arrsc].tab = ft_split_whitespaces(av[arrsc]);
		arrsc++;
	}
	arr_struct[arrsc].str = 0;
	return (arr_struct);
}
