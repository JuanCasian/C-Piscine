/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:26:15 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 10:33:52 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_abs.h"

int main(int argc, char **argv)
{
	int value;

	if(argc > 0)
	{
		value = ft_atoi(argv[1]);
		ft_putnbr(ABS(value));
	}
	return (0);
}
