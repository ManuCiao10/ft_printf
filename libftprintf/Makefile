# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 13:15:29 by eardingh          #+#    #+#              #
#    Updated: 2022/04/09 18:03:39 by eardingh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
		sources/ft_address.c \
		sources/ft_putnbr_hexadecimal.c \
		sources/ft_putstr_fd.c \
		sources/ft_putnbr_fd.c \
		sources/ft_print_unsigned.c
		
OBJ = $(SRCS:%c=%o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(NAME)

fclean: clean
	rm -f $(NAME)

re:	fclean all