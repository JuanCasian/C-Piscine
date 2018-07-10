/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 19:04:01 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 16:31:20 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

#define TEXT1 "THE FOLLOWING TAKES PLACE BETWEEN

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_takes_place(int hour)
{
	if (hour == 0 || hour == 24)
		ft_putstr(TEXT1 12.00 A.M. AND 01.00 A.M.");
	else if (hour < 11)
	{
		ft_putstr(TEXT1 ");
		printf("%02d", hour);
		printf("%s", ".00 A.M. AND ");
		printf("%02d", (hour + 1));
		printf("%s", ".00 A.M.");
	}
	else if (hour == 11)
		ft_putstr(TEXT1 11.00 A.M. AND 12.00 P.M.");
	else if (hour == 12)
		ft_putstr(TEXT1 12.00 P.M. AND 01.00 P.M.");
	else if (hour < 23)
	{
		ft_putstr(TEXT1");
		printf("%02d", (hour % 12));
		printf("%s", ".00 P.M. AND ");
		printf("%2d", ((hour + 1) % 12));
		printf("%s", ".00 P.M.");
	}
	else if (hour == 23)
		ft_putstr(TEXT1 1.00 P.M. AND 12.00 A.M.");
	ft_putchar('\n');
}
