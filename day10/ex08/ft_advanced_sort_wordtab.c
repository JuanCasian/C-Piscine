/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 02:52:02 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/29 02:55:52 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_str(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_str(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
