# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsikira <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 15:23:33 by elsikira          #+#    #+#              #
#    Updated: 2024/03/27 12:18:09 by elsikira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

MAIN_SRC = main.c

SRCS = errors.c 

LIBFT_PATH = libft

PRINTF_PATH = ft_printf

OBJS = $(SRCS:.c=.o)

CC = cc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -g3

all: libft ft_printf $(NAME)

.PHONY: all clean fclean re libft ft_printf

