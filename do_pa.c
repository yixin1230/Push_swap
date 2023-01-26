/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_pa.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:03 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:57:24 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_pa(t_data *all)
{
	if (!all->a)
		return ;
	link_add_top(all, 'a', newnode(all->b->content));
	all->a->index = all->b->index;
	link_del_top(all, 'b');
	if (all->do_write == 1)
		write(1, "pa\n", 3);
}
