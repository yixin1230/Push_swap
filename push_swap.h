/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:16:21 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/03 16:24:55 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap.h"
# include "ft_printf/ft_printf.h"

typedef struct nodes
{
	long			content;
	struct nodes	*next;
}t_node;

int	fill_stack_a(char **str, int argc, t_node **stack);

# define MAX_INT 2147483647
# define MIN_INT -2147483648

#endif
