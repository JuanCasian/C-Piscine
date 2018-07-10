/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 11:40:55 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/16 23:21:32 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char	mychar;

	mychar = 'a';
	while (mychar <= 'z')
	{
		ft_putchar(mychar);
		mychar = mychar + 1;
	}
}
