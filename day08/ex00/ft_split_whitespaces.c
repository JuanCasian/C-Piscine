/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:00:34 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 08:41:07 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int	n_words;
	int	i;
	int flag;

	i = 0;
	n_words = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i])
	{
		if (ft_is_space(str[i]))
		{
			n_words++;
			i++;
			flag = 0;
			while (str[i] && ft_is_space(str[i]))
				i++;
		}
		else
		{
			i++;
			flag = 1;
		}
	}
	return (n_words + flag);
}

int		ft_count_letters(char *str, int i)
{
	int	n_letters;

	n_letters = 0;
	while (str[i])
	{
		if (ft_is_space(str[i]))
			return (n_letters);
		n_letters++;
		i++;
	}
	return (n_letters);
}

void	ft_set_str(char **result, char *str, int *k, int *i)
{
	int size;
	int j;

	j = 0;
	size = ft_count_letters(str, *i);
	result[*k] = (char*)malloc(size);
	while (j < size)
	{
		result[*k][j++] = str[*i];
		*i = *i + 1;
	}
	result[*k][j] = '\0';
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		i;
	int		k;
	int		n_words;

	n_words = ft_count_words(str);
	result = (char **)malloc(sizeof(result) * n_words + 1);
	k = 0;
	i = 0;
	while (str[i])
	{
		while (ft_is_space(str[i]))
			i++;
		if (str[i])
		{
			ft_set_str(result, str, &k, &i);
			k++;
		}
	}
	result[k] = 0;
	return (result);
}
