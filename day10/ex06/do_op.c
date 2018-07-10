/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 00:01:19 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 00:05:44 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		is_valid_arg(char **argv)
{
	int i;
	int valid[3];

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			valid[0] = 1;
		i++;
	}
	i = 0;
	while (argv[3][i])
	{
		if (argv[3][i] >= '0' && argv[3][i] <= '9')
			valid[1] = 1;
		i++;
	}
	if (argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '/'
				|| argv[2][0] == '%' || argv[2][0] == '*')
		valid[2] = 1;
	if (valid[0] == 1 && valid[1] == 1 && valid[2] == 1)
		return (1);
	else
		return (0);
}

int		type_of_oper(char **argv)
{
	if (argv[2][0] == '+')
		return (0);
	if (argv[2][0] == '-')
		return (1);
	if (argv[2][0] == '/')
		return (2);
	if (argv[2][0] == '%')
		return (3);
	if (argv[2][0] == '*')
		return (4);
	else
		ft_putstr("error en tipe de operacion");
	return (-1);
}

int		main(int argc, char **argv)
{
	void (*operations[5])(int, int);

	operations[0] = ft_add;
	operations[1] = ft_sub;
	operations[2] = ft_div;
	operations[3] = ft_mod;
	operations[4] = ft_mul;
	if (argc == 4)
	{
		if (!(is_valid_arg(argv)))
		{
			ft_putchar('0');
			ft_putchar('\n');
			return (0);
		}
		(operations[type_of_oper(argv)](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	return (0);
}
