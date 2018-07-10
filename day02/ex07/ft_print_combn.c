/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:02:14 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/17 09:23:24 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar (char c)
{
        write(1, &c, 1);
}

void	ft_print_combn(int gn)
{
	char	initial_num;
	char	end_num;
	char	j;
	char	k;

	initial_num = '0';
	end_num = ':';

	while (initial_num++ < (end_num - gn))
	{
		j = initial_num;
		while (j++ < (end_num - (gn+1)))
		{
			k = j;
			while (k++ < (end_num - (gn + 0)))
			{
				ft_putchar(initial_num - 1);
				ft_putchar(j - 1);
				ft_putchar(k - 1);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\b');
	ft_putchar('\b');
}

int main () {
        ft_print_combn(22);
}
