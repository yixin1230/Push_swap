# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/19 09:14:33 by yizhang       #+#    #+#                  #
#    Updated: 2022/12/19 11:53:32 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra
FT_PRINTF = ft_printf/libftprintf.a
SRC = push_swap.c
OBJ = ${SRC:.c=.o}

all:${NAME}

${NAME}:${OBJ} ${FT_PRINTF}
		make -C ft_printf
		cp ${FT_PRINTF} ${NAME}
		${CC} ${FLAGS} ${OBJ} ${NAME}

%.o:%.c
		${CC} ${FLAGS} -c $< -o $@
	
clean:
	rm -rf ${OBJ}
	make clean -C ft_printf

fclean:
	clean
	rm -rf${NAME}
	make fclean -C ft_printf

re: fclean all