/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 20:30:18 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/22 20:21:54 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	position;
	unsigned int	notfilled;

	result = 0;
	position = 0;
	notfilled = 0;
	while (src[result])
		result++;
	if (size == 0)
		return (result);
	while (dest[position] && position < size)
	{
		result++;
		position++;
	}
	while (position < size - 1 && *src)
	{
		dest[position] = *src++;
		notfilled = 1;
		position++;
	}
	if (notfilled)
		dest[position] = '\0';
	return (result);
}
