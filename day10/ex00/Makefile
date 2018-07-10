# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcasian <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 15:09:43 by jcasian           #+#    #+#              #
#    Updated: 2018/05/29 00:39:37 by jcasian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c ./srcs/ft_swap.c

INCLUDES = ./includes/*.h

BINARIES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(INCLUDES)
	@ar rc $(NAME) $(BINARIES)
	@ranlib $(NAME)
	@rm *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
