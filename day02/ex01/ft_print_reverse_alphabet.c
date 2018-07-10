/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 15:47:33 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/16 20:25:41 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	char	mychar;

	mychar = 'z';
	while (mychar >= 'a')
	{
		ft_putchar(mychar);
		mychar = mychar - 1;
	}
}
