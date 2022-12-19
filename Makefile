# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/19 09:14:33 by yizhang       #+#    #+#                  #
#    Updated: 2022/12/19 14:23:07 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra
FT_PRINTF = ft_printf/libftprintf.a
SRC = push_swap.c find_error.c

all:${NAME}

${NAME}:${SRC} ${FT_PRINTF}
		${CC} ${FLAGS} ${SRC} ${FT_PRINTF} -o ${NAME}

${FT_PRINTF}:
	make -C ft_printf

clean:
	make clean -C ft_printf

fclean: clean
	rm -rf ${NAME}
	make fclean -C ft_printf

re: fclean all