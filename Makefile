# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsikira <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 15:23:33 by elsikira          #+#    #+#              #
#    Updated: 2024/05/14 15:43:13 by elsikira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[0;31m
GREEN=\033[0;32m

NAME = push_swap

MAIN_SRC = main.c

SRCS = args_errors.c make_lists.c push_operations.c swap_operations.c rotate_operations.c reverse_rotate_operations.c stack_utils.c algo.c 

LIBFT_PATH = libft

FT_PRINTF_PATH = ft_printf

OBJS = $(SRCS:.c=.o)

MAIN_OBJ = $(MAIN_SRC:.c=.o)

CC = cc

RM = rm -rf

.PHONY: all clean fclean re libft ft_printf

CFLAGS = -Wall -Wextra -Werror -g3 -Iinclude

all: libft ft_printf $(NAME)

$(NAME): $(OBJS) $(MAIN_OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MAIN_OBJ) -Llibft -lft  -Lft_printf -lftprintf
	@printf "$(GREEN)Compilation of push_swap is complete.\n\033[0m"


libft:
	$(MAKE) -C $(LIBFT_PATH)
	@printf "$(GREEN)Compilation of libft is complete.\n\033[0m"

ft_printf:
	$(MAKE) -C $(FT_PRINTF_PATH)
	@printf "$(GREEN)Compilation of ft_printf is complete.\n\033[0m"

clean:
	$(RM) $(OBJS) $(MAIN_OBJ)
	cd $(LIBFT_PATH) && make clean
	cd $(FT_PRINTF_PATH) && make clean
	@printf "$(GREEN)All files are cleaned.\n\033[0m"

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT_PATH) && make fclean
	cd $(FT_PRINTF_PATH) && make fclean
	@printf "$(GREEN)All files are cleaned.\n\033[0m"

re: fclean all

