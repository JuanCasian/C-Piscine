/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 19:00:27 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/17 19:10:41 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tempdiv;
	int tempmod;

	tempdiv = *a / *b;
	tempmod = *a % *b;
	*a = tempdiv;
	*b = tempmod;
}
