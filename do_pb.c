/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_pb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:46:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:57:46 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_pb(t_data *all)
{
	if (!all->a)
		return ;
	link_add_top(all, 'b', newnode(all->a->content));
	all->b->index = all->a->index;
	link_del_top(all, 'a');
	if (all->do_write == 1)
		write(1, "pb\n", 3);
}
