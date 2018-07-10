/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:27:54 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/23 13:43:51 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		*ft_range(int min, int max);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	*ptr;
	int i;

	i = 0;
	if (argc == 3)
	{
		ptr = ft_range(ft_atoi((char*)argv[1]), ft_atoi((char*)argv[2]));
		while (ptr[i])
		{
			ft_putnbr(ptr[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
