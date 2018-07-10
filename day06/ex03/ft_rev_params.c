/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:28:14 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/22 13:41:52 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;
	int i;

	j = argc - 1;
	if (argc > 0)
	{
		while (j > 0)
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			j--;
		}
	}
	return (0);
}
