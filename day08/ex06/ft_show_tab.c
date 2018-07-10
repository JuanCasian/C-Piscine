/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:25:44 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 16:03:57 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int counter;
	int tabc;

	counter = 0;
	tabc = 0;
	while (par[counter].str != 0)
	{
		ft_putstr(par[counter].copy);
		ft_putchar('\n');
		ft_putnbr(par[counter].size_param);
		ft_putchar('\n');
		while (par[counter].tab[tabc])
		{
			ft_putstr(par[counter].tab[tabc]);
			ft_putchar('\n');
			tabc++;
		}
		counter++;
	}
}
