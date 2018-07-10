/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:54:46 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 00:45:41 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_atoi(char *str);

void	ft_add(int val1, int val2)
{
	int res;

	res = val1 + val2;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	ft_sub(int val1, int val2)
{
	int res;

	res = val1 - val2;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	ft_div(int val1, int val2)
{
	int res;

	if (val2 == 0)
	{
		ft_putstr("Stop : division by zero");
		ft_putchar('\n');
		return ;
	}
	else
	{
		res = val1 / val2;
		ft_putnbr(res);
		ft_putchar('\n');
	}
}

void	ft_mod(int val1, int val2)
{
	int res;

	if (val2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		ft_putchar('\n');
		return ;
	}
	else
	{
		res = val1 % val2;
		ft_putnbr(res);
		ft_putchar('\n');
	}
}

void	ft_mul(int val1, int val2)
{
	int res;

	res = val1 * val2;
	ft_putnbr(res);
	ft_putchar('\n');
}
