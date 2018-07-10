/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 19:01:55 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/24 16:02:06 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size_argv(int argc, char **argv)
{
	int i;
	int j;
	int counter;

	i = 1;
	counter = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
			counter++;
		}
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	char	*str;
	int		j;
	int		k;

	j = 1;
	len = ft_size_argv(argc, argv);
	str = (char*)malloc(len);
	len = 0;
	while (j < argc)
	{
		k = 0;
		while (argv[j][k])
		{
			str[len] = argv[j][k];
			k++;
			len++;
		}
		str[len] = '\n';
		len++;
		j++;
	}
	str[len - 1] = '\0';
	return (str);
}
