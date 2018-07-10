/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:40:20 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/23 14:39:38 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
		ft_putstr(ft_strdup(argv[1]));
	}
	return (0);
}
