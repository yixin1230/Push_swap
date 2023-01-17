/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_pb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:46:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 16:39:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_pb(t_data *all)
{
	if (all->a)
	{
		link_add_top(all, 'b', newnode(all->a->content));
		all->b->index = all->a->index;
		link_del_top(all, 'a');
	}
	write(1, "pb\n", 3);
}
