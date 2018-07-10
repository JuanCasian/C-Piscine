/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:49:23 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/23 16:00:02 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_ultimate_range(int **range, int min, int max);

int		main(int argc, char **argv)
{
	int **arg = {{0,0}};
	if (argc == 3)
		ft_putnbr(ft_ultimate_range(range, ft_atoi((char*)argv[1]), ft_atoi((char*)argv[2])));
	ft_putchar('\n');
	return 0;
}
