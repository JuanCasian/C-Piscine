/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:34:27 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/23 18:57:18 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;

	len = max - min;
	range[0] = (int*)malloc(len * 4);
	if (len <= 0)
	{
		range = NULL;
		len = 0;
		return (0);
	}
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (len);
}
