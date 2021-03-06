/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:53:13 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/28 18:57:37 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
}
