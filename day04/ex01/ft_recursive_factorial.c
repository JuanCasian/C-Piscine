/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:06:05 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/19 00:57:29 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (nb);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
