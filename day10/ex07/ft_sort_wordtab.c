/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 01:30:11 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 02:52:15 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap_str(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_str(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
