/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sterrev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 20:09:12 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/18 11:26:57 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size])
	{
		size++;
	}
	size--;
	while (i < size)
	{
		temp = str[size];
		str[size] = str[i];
		str[i] = temp;
		i++;
		size--;
	}
	return (str);
}
