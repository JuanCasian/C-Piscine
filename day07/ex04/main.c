/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 20:16:40 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 00:27:47 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char **arr;
	int counter;

	counter = 0;
	if (argc == 2)
	{
		arr = ft_split_whitespaces(argv[1]);
	}
	return (0);
}
