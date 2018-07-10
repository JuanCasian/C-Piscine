/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:44:38 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/25 09:42:42 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

int				ft_atoi(char *str);

void			ft_putchar(char c);

void			ft_putnbr(int nb);

void			ft_putstr(char *str);

int				ft_str_is_alpha(char *str);

int				ft_str_is_lowercase(char *str);

int				ft_str_is_numeric(char *str);

int				ft_str_is_printable(char *str);

int				ft_str_is_uppercase(char *str);

char			*ft_strcapitalize(char *str);

char			*ft_strcat(char *dest, char *src);

int				ft_strcmp(char *s1, char *s2);

char			*ft_strcpy(char *dest, char *src);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				ft_strlen(char *str);

char			*ft_strlowcase(char *str);

char			*ft_strncat(char *dest, char *src, int nb);

int				ft_strncmp(char *s1, char *s2, unsigned int n);

char			*ft_strncpy(char *dest, char *src, unsigned int n);

char			*ft_strstr(char *str, char *to_find);

char			*ft_strupcase(char *str);

void			ft_swap(int *a, int *b);

#endif
