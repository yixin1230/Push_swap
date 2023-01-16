/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rrb.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:22 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 11:06:41 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	do_rrb(t_data *all)
{
	if (!all->b)
		return ;
	all->b = all->b->prev;
	write(1, "rrb\n", 4);
}
