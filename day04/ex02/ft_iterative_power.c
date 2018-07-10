/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 01:04:06 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/19 01:25:29 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = nb;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i < power)
	{
		result *= nb;
	}
	return (result);
}
