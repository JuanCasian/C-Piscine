# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcasian <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 18:52:13 by jcasian           #+#    #+#              #
#    Updated: 2018/05/31 18:55:36 by jcasian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRCS = srcs/*.c

all:
	@gcc $(SRCS) -Wall -Werror -Wextra -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean re
