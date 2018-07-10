/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:27:10 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/22 20:44:28 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	position;

	result = 0;
	position = 0;
	while (src[result])
		result++;
	if (size == 0)
		return (result);
	while (dest[position] && position < (size))
	{
		result++;
		position++;
	}
	position = 0;
	while (position < (size - 1) && *src)
	{
		dest[position] = *src++;
		position++;
	}
	dest[position] = '\0';
	return (result);
}
