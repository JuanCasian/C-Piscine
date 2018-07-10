/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:34:16 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 10:53:40 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H
# define ABS(value) (value == -2147483648 ? 0 : (value < 0 ? -value : value))

#endif
