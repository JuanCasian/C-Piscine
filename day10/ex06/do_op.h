/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:59:07 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 00:04:09 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H

# define DO_OP_H

# include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_atoi(char *str);

void	ft_add(int val1, int val2);

void	ft_sub(int val1, int val2);

void	ft_div(int val1, int val2);

void	ft_mod(int val1, int val2);

void	ft_mul(int val1, int val2);

#endif
