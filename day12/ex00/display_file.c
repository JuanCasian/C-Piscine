/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 21:34:35 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/31 18:31:08 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_err(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar_err(str[i]);
		i++;
	}
}

void	display_file(char *path)
{
	int		fd;
	char	buf[1];

	fd = open(path, O_RDONLY);
	while (read(fd, buf, sizeof(buf)))
		ft_putchar(buf[0]);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc >= 3)
		ft_putstr("Too many arguments.\n");
	else
	{
		display_file(argv[1]);
	}
	return (0);
}
