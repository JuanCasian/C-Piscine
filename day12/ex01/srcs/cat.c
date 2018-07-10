/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 18:38:41 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/31 18:55:03 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	display(int count, char **files)
{
	int		fd;
	char	buf[28676];
	int		i;
	ssize_t	bytes;
	char	*filename;

	i = 0;
	while(++i <= count)
	{
		filename = files[i];
		fd = open(filename, O_RDWR);
		if (fd < 0)
		{
			write(2, "cat: ", 5);
			write(2, filename, ft_strlen(filename));
			if (errno == 21)
				write(2, ": Is a directory\n", 17);
			else
				write(2, ": No such file or directory\n", 28);
			continue ;
		}
		while ((bytes = read(fd, &buf, 28676)))
			write(1, &buf, bytes);
		close(fd);
	}
}

void	write_in_terminal(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write_in_terminal();
	else
		display(argc - 1, argv);
	return (0);
}
