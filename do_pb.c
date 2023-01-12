/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_pb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:46:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/12 11:21:24 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_pb(t_data *all)
{
	long	tmp;
	if (!all->b)
		return ;
	tmp = all->b->content;
	link_del_top(all, 'a');
	link_add_top(all, 'b', tmp);
	write(1, "pb\n", 3);
}
