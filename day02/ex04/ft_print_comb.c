/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:02:14 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/16 23:16:41 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char	initial_num;
	char	j;
	char	k;

	initial_num = '0';
	while (initial_num++ < '8')
	{
		j = initial_num;
		while (j++ < '9')
		{
			k = j;
			while (k++ < ':')
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
