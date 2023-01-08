# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/19 09:14:33 by yizhang       #+#    #+#                  #
#    Updated: 2023/01/06 18:47:18 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra
FT_PRINTF = ft_printf/libftprintf.a
SRC =	push_swap.c find_error_fill_stack.c create_data.c node_utils.c \
		do_sa.c do_sb.c do_ss.c do_ra.c do_rb.c do_rr.c do_rra.c do_rrb.c \
		do_rrr.c do_pa.c do_pb.c link_del_top.c link_add_top.c less_than_5.c\
		free_utils.c

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