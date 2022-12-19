# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/19 09:14:33 by yizhang       #+#    #+#                  #
#    Updated: 2022/12/19 09:28:10 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = push_swap.c
OBJ = ${SRC:.c=.o}

all:${NAME}

${NAME}:${SRC}${OBJ}

clean: rm -rf ${OBJ}

fclean: clean
		rm -rf${NAME}

re:fclean all