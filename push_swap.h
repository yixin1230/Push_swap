/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:16:21 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/03 19:00:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include "push_swap.h"
# include "ft_printf/ft_printf.h"

typedef struct nodes
{
	long			content;
	struct nodes	*next;
	struct nodes	*prev;
}t_node;

typedef struct datas
{
	t_node	*a;
	t_node	*b;
	char	**argv;
	int		argc;
}t_data;

int		fill_stack_a(t_data	*all);
t_data	*create_data(char **argv, int argc);

#endif
