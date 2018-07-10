/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 01:59:27 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/19 02:34:21 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	divisor;

	divisor = 1;
	if (nb <= 0)
		return (0);
	while (divisor * divisor < nb)
		divisor++;
	if (nb % divisor == 0)
		return (divisor);
	return (0);
}
