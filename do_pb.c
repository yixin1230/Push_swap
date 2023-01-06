/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_pb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:46:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 16:52:43 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_pb(t_data *all)
{
	if (!all->a)
		return ;
	link_add_top(all, 'b', all->a->content);
	link_del_top(all, 'a');
	write(1, "pb\n", 3);
}
