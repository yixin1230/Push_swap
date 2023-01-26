# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/19 09:14:33 by yizhang       #+#    #+#                  #
#    Updated: 2023/01/26 11:48:59 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
B_NAME = checker
CC = gcc
FLAGS = -Wall -Werror -Wextra
FT_PRINTF = ft_printf/libftprintf.a
MAIN = push_swap.c
B_MAIN = checker.c
SRC =	find_error_fill_stack.c create_data.c node_utils.c \
		do_sa.c do_sb.c do_ss.c do_ra.c do_rb.c do_rr.c do_rra.c \
		do_rrb.c do_rrr.c do_pa.c do_pb.c link_del_top.c link_add_top.c \
		less_than_5.c free_utils.c find_med_min_max_give_index.c \
		radix_sort.c see_the_stack.c get_next_line_utils.c get_next_line.c

OBJ = ${SRC:.c=.o}

all:${NAME}
bonus:${B_NAME}

${NAME}:${OBJ} ${MAIN} ${FT_PRINTF}
		@${CC} ${FLAGS} ${OBJ} ${MAIN} ${FT_PRINTF} -o ${NAME}

${B_NAME}:${OBJ} ${B_MAIN} ${FT_PRINTF}
		@${CC} ${FLAGS} ${OBJ} ${B_MAIN} ${FT_PRINTF} -o ${B_NAME}

${OBJ}:${SRC}
	@${CC} ${FLAGS} -c ${SRC}

${FT_PRINTF}:
	@make -C ft_printf

clean:
	@make clean -C ft_printf
	@rm -rf ${OBJ}

fclean: clean
	@rm -rf ${NAME} ${B_NAME}
	@make fclean -C ft_printf

re: fclean all