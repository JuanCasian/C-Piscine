/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 19:11:24 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/23 19:23:38 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concat_params(int argc, char **argv);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	ft_putstr(ft_concat_params(argc, argv));
	return (0);
}
