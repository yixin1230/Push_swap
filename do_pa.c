/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_pa.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:03 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/12 11:20:25 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_pa(t_data *all)
{
	long	tmp;
	if (!all->b)
		return ;
	tmp = all->b->content;
	link_del_top(all, 'b');
	link_add_top(all, 'a', tmp);
	write(1, "pa\n", 3);
}
