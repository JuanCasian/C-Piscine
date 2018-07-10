/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:38:13 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 16:13:26 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
void ft_show_tab(struct s_stock_par* par);
int main()
{
	t_stock_par stuff[2];
	char* words[] = {"lol","hijack", NULL};
	stuff[0].size_param = 10;
	stuff[0].str = "hello world!";
	stuff[0].copy = "hello world!";
	stuff[0].tab = words;
	
	stuff[1].str = NULL;

	ft_show_tab(stuff);
}
