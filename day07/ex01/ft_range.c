/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:55:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/23 18:32:39 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		len;
	int		*str;

	if (max > min)
	{
		len = max - min;
		str = (int*)malloc((4) * (len + 1));
		len = 0;
		while (min < max)
		{
			str[len] = min;
			min++;
			len++;
		}
		str[len] = '\0';
	}
	else
		return (0);
	return (str);
}
